
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vc_data*,unsigned char) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_2, unsigned char VAR_3, char VAR_4)
{
 if (VAR_4)
  return;

 if (FUNC_1(VAR_1, VAR_0)) {
  FUNC_0(VAR_2, '\033');
  FUNC_0(VAR_2, VAR_3);
 } else
  FUNC_0(VAR_2, VAR_3 | 0x80);
}
