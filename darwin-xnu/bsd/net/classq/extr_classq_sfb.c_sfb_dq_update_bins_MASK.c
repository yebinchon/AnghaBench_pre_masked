
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int64_t ;
typedef scalar_t__ u_int32_t ;
struct timespec {int dummy; } ;
struct sfbbinstats {int pkts; scalar_t__ bytes; } ;
struct sfb_fcl {int fclist; } ;
struct sfb {int sfb_current; scalar_t__ sfb_fc_threshold; int sfb_allocation; } ;


 int FUNC_0 (struct sfb*,int,int,int) ;
 int FUNC_1 (int ) ;
 struct sfbbinstats* FUNC_2 (struct sfb*,int,int,int) ;
 int VAR_0 ;
 struct sfb_fcl* FUNC_3 (struct sfb*,int) ;
 int FUNC_4 (struct sfb*) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (struct sfb*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct sfb*,struct sfbbinstats*,int ,struct timespec*) ;
 int FUNC_9 (struct sfb*,struct sfb_fcl*) ;

__attribute__((used)) static inline void
FUNC_10(struct sfb *VAR_2, uint32_t VAR_3, uint32_t VAR_4,
    struct timespec *VAR_5, u_int32_t VAR_6)
{

 int VAR_7;

 struct sfbbinstats *VAR_8;
 int VAR_9, VAR_10;
 struct sfb_fcl *VAR_11 = ((void*)0);
 uint8_t *VAR_12 = (uint8_t *)&VAR_3;

 VAR_9 = VAR_2->sfb_current;
 FUNC_7((VAR_9 + (VAR_9 ^ 1)) == 1);
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_9 == 0)
   VAR_10 = FUNC_1(VAR_12[VAR_7]);
  else
   VAR_10 = FUNC_1(VAR_12[VAR_7 + 2]);

  VAR_8 = FUNC_2(VAR_2, VAR_7, VAR_10, VAR_9);

  FUNC_7(VAR_8->pkts > 0 && VAR_8->bytes >= VAR_4);
  VAR_8->pkts--;
  VAR_8->bytes -= VAR_4;
  if (VAR_8->pkts == 0)
   FUNC_8(VAR_2, VAR_8,
       FUNC_0(VAR_2, VAR_7, VAR_10, VAR_9), VAR_5);
  if (VAR_7 != VAR_0)
   continue;
  if (FUNC_5(VAR_2)) {
   if (!(FUNC_4(VAR_2)) ||
       VAR_8->bytes <= VAR_2->sfb_fc_threshold)
    VAR_11 = FUNC_3(VAR_2, VAR_10);
  } else if (VAR_8->pkts <= (VAR_2->sfb_allocation >> 2)) {
   VAR_11 = FUNC_3(VAR_2, VAR_10);
  }
  if (VAR_11 != ((void*)0) && !FUNC_6(&VAR_11->fclist))
   FUNC_9(VAR_2, VAR_11);
  VAR_11 = ((void*)0);
 }

}
