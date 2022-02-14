
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_flow_set {int flags_fs; int rq_size; scalar_t__ rq_elements; int * rq; } ;
struct dn_flow_queue {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int,int ,int) ;
 int VAR_6 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(struct dn_flow_set *VAR_7, struct dn_flow_set *VAR_8)
{
    if (VAR_7->flags_fs & VAR_0) {
 int VAR_9 = VAR_8->rq_size;

 if (VAR_9 == 0)
     VAR_9 = VAR_6;
 if (VAR_9 < 4)
     VAR_9 = 4;
 else if (VAR_9 > VAR_1)
     VAR_9 = VAR_1;
 VAR_7->rq_size = VAR_9;
    } else
 VAR_7->rq_size = 1;
    VAR_7->rq = FUNC_0((1 + VAR_7->rq_size) * sizeof(struct dn_flow_queue *),
     VAR_4, VAR_3 | VAR_5);
    if (VAR_7->rq == ((void*)0)) {
 FUNC_1("dummynet: sorry, cannot allocate queue\n");
 return VAR_2;
    }
    VAR_7->rq_elements = 0;
    return 0 ;
}
