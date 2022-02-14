
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct dn_flow_set {int flags_fs; scalar_t__ lookup_step; scalar_t__ lookup_depth; int* w_q_lookup; scalar_t__ min_th; scalar_t__ max_th; int c_4; int c_2; int max_pkt_size; scalar_t__ c_1; scalar_t__ c_3; scalar_t__ w_q; } ;
struct dn_flow_queue {scalar_t__ len_bytes; scalar_t__ len; int avg; scalar_t__ q_time; int count; int random; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(struct dn_flow_set *VAR_3, struct dn_flow_queue *VAR_4, int VAR_5)
{
    int64_t VAR_6 = 0;

    u_int VAR_7 = (VAR_3->flags_fs & VAR_1) ? VAR_4->len_bytes : VAR_4->len;

    FUNC_0(("\ndummynet: %d q: %2u ", (int) VAR_2, VAR_7));


    if (VAR_7 != 0) {



 int VAR_8 = FUNC_1(VAR_7) - VAR_4->avg;
 int64_t VAR_9 = FUNC_2((int64_t) VAR_8, (int64_t) VAR_3->w_q);

 VAR_4->avg += (int) VAR_9;
    } else {







 if (VAR_4->avg) {
     u_int VAR_10 = (VAR_2 - VAR_4->q_time) / VAR_3->lookup_step;

     VAR_4->avg = (VAR_10 < VAR_3->lookup_depth) ?
      FUNC_2(VAR_4->avg, VAR_3->w_q_lookup[VAR_10]) : 0;
 }
    }
    FUNC_0(("dummynet: avg: %u ", FUNC_3(VAR_4->avg)));



    if (VAR_4->avg < VAR_3->min_th) {
 VAR_4->count = -1;
 return 0;
    }
    if (VAR_4->avg >= VAR_3->max_th) {
 if (VAR_3->flags_fs & VAR_0) {






     VAR_6 = FUNC_2((int64_t) VAR_3->c_3, (int64_t) VAR_4->avg) - VAR_3->c_4;
 } else {
     VAR_4->count = -1;
     FUNC_0(("dummynet: - drop"));
     return 1 ;
 }
    } else if (VAR_4->avg > VAR_3->min_th) {





 VAR_6 = FUNC_2((int64_t) VAR_3->c_1, (int64_t) VAR_4->avg) - VAR_3->c_2;
    }
    if (VAR_3->flags_fs & VAR_1)
 VAR_6 = (VAR_6 * VAR_5) / VAR_3->max_pkt_size;
    if (++VAR_4->count == 0)
 VAR_4->random = (FUNC_4() & 0xffff);
    else {




 if (FUNC_2(VAR_6, FUNC_1((int64_t) VAR_4->count)) > VAR_4->random) {
     VAR_4->count = 0;
     FUNC_0(("dummynet: - red drop"));

     VAR_4->random = (FUNC_4() & 0xffff);
     return 1;
 }
    }

    return 0 ;
}
