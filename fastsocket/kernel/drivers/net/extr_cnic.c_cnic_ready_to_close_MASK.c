
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cnic_sock {scalar_t__ state; int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct cnic_sock *VAR_5, u32 VAR_6)
{
 if (FUNC_0(VAR_4, &VAR_5->flags)) {

  VAR_6 = VAR_2;
  VAR_5->state = VAR_6;
 }







 if (VAR_6 == VAR_5->state || VAR_5->state == 0 ||
     VAR_5->state == VAR_0 ||
     VAR_5->state == VAR_1) {
  if (!FUNC_1(VAR_3, &VAR_5->flags)) {
   if (VAR_5->state == 0)
    VAR_5->state = VAR_6;
   return 1;
  }
 }
 return 0;
}
