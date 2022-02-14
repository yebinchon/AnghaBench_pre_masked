
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int pmap_t ;
typedef int kern_return_t ;
typedef int addr64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int ,...) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,unsigned int) ;

kern_return_t
FUNC_4(
 pmap_t VAR_4,
 addr64_t VAR_5,
 uint64_t VAR_6,
 unsigned int VAR_7)
{
 kern_return_t VAR_8 = VAR_2;

 FUNC_1(2, FUNC_0(VAR_3) | VAR_1,
            FUNC_2(VAR_4), FUNC_2(VAR_5));

 VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7);

 FUNC_1(2, FUNC_0(VAR_3) | VAR_0, VAR_8);

 return VAR_8;
}
