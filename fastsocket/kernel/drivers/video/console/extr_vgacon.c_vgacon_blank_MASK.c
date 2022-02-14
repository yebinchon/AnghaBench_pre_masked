
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_screenbuf_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 (struct vc_data*,int ) ;
 int FUNC_3 (int *,int) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (struct vc_data*) ;

__attribute__((used)) static int FUNC_6(struct vc_data *VAR_9, int VAR_10, int VAR_11)
{
 switch (VAR_10) {
 case 0:
  if (VAR_6) {
   FUNC_4(&VAR_3);
   VAR_6 = 0;
  }
  if (VAR_5) {
   FUNC_2(VAR_9, VAR_2);
   VAR_5 = 0;
   return 0;
  }
  VAR_4 = 0;

  return 1;
 case 1:
 case -1:
  if (!VAR_11 && VAR_7 == VAR_1) {
   FUNC_1(&VAR_3);
   VAR_5 = 1;
   return 0;
  }
  FUNC_5(VAR_9);
  FUNC_0((void *) VAR_8, VAR_0,
       VAR_9->vc_screenbuf_size);
  if (VAR_11)
   VAR_4 = 1;
  return 1;
 default:
  if (VAR_7 == VAR_1) {
   FUNC_3(&VAR_3, VAR_10 - 1);
   VAR_6 = VAR_10;
  }
  return 0;
 }
}
