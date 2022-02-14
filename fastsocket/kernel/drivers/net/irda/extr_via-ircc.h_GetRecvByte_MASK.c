
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_ircc_cb {int RxLastCount; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static __u16 FUNC_1(__u16 VAR_2, struct via_ircc_cb * VAR_3)
{
 __u8 VAR_4, VAR_5;
 __u16 VAR_6, VAR_7, VAR_8;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 VAR_5 = FUNC_0(VAR_2, VAR_0);
 VAR_7 = VAR_5;
 VAR_6 = (VAR_7 << 8) | VAR_4;


 if (VAR_6 >= VAR_3->RxLastCount)
  VAR_8 = VAR_6 - VAR_3->RxLastCount;
 else
  VAR_8 = (0x8000 - VAR_3->RxLastCount) + VAR_6;
 VAR_3->RxLastCount = VAR_6;
 return VAR_8;
}
