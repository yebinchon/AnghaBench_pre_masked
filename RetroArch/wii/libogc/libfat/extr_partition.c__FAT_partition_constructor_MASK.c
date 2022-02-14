
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int sec_t ;
typedef int PARTITION ;
typedef int DISC_INTERFACE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int const*,int ,int ,int ,int *) ;

PARTITION* FUNC_3 (const DISC_INTERFACE* VAR_1, uint32_t VAR_2, uint32_t VAR_3, sec_t VAR_4)
{
 uint8_t *VAR_5 = (uint8_t*) FUNC_0(VAR_0);
 if (!VAR_5) return ((void*)0);
 PARTITION *VAR_6 = FUNC_2(VAR_1, VAR_2,
   VAR_3, VAR_4, VAR_5);
 FUNC_1(VAR_5);
 return VAR_6;
}
