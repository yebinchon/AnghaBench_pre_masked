
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wbcir_data {scalar_t__ ebase; scalar_t__ wbase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,scalar_t__) ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_2(struct wbcir_data *VAR_8)
{
 u8 VAR_9;


 VAR_9 = VAR_7 << 4;
 if (VAR_6)
  VAR_9 |= 0x08;
 FUNC_0(VAR_9, VAR_8->wbase + VAR_3);


 FUNC_1(VAR_8->wbase + VAR_5, 0x17, 0x17);


 FUNC_1(VAR_8->wbase + VAR_4, 0x00, 0x07);


 FUNC_1(VAR_8->wbase + VAR_2, 0x4A, 0x7F);


 if (VAR_6)
  FUNC_0(0x04, VAR_8->ebase + VAR_0);
 else
  FUNC_0(0x00, VAR_8->ebase + VAR_0);





 FUNC_0(0x10, VAR_8->ebase + VAR_1);
}
