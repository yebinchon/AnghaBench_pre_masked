
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ u_int16_t ;
struct timespec {int dummy; } ;
struct sfbbinstats {scalar_t__ pkts; scalar_t__ pmark; } ;
struct sfb {int sfb_current; scalar_t__ sfb_allocation; int sfb_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct sfb*,int,int,int) ;
 int FUNC_1 (int ) ;
 struct sfbbinstats* FUNC_2 (struct sfb*,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sfb*,struct sfbbinstats*) ;
 int FUNC_5 (struct sfb*,struct sfbbinstats*,int ,struct timespec*) ;

__attribute__((used)) static int
FUNC_6(struct sfb *VAR_3, uint32_t VAR_4, u_int16_t *VAR_5,
    struct timespec *VAR_6)
{

 int VAR_7;

 struct sfbbinstats *VAR_8;
 int VAR_9, VAR_10, VAR_11 = 0;
 uint8_t *VAR_12 = (uint8_t *)&VAR_4;

 VAR_9 = VAR_3->sfb_current;
 FUNC_3((VAR_9 + (VAR_9 ^ 1)) == 1);

 *VAR_5 = (u_int16_t)-1;
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_9 == 0)
   VAR_10 = FUNC_1(VAR_12[VAR_7]);
  else
   VAR_10 = FUNC_1(VAR_12[VAR_7 + 2]);

  VAR_8 = FUNC_2(VAR_3, VAR_7, VAR_10, VAR_9);
  if (*VAR_5 > (u_int16_t)VAR_8->pmark)
   *VAR_5 = (u_int16_t)VAR_8->pmark;

  if (VAR_8->pkts >= VAR_3->sfb_allocation)
   FUNC_5(VAR_3, VAR_8,
       FUNC_0(VAR_3, VAR_7, VAR_10, VAR_9), VAR_6);
  if (VAR_7 == VAR_1)
   VAR_11 = FUNC_4(VAR_3, VAR_8);
 }


 if (VAR_3->sfb_flags & VAR_0)
  VAR_11 = 1;

 return (VAR_11);
}
