
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_atapi_pc {int* c; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ide_atapi_pc*) ;

__attribute__((used)) static void FUNC_1(struct ide_atapi_pc *VAR_2)
{
 FUNC_0(VAR_2);
 VAR_2->c[0] = VAR_0;
 VAR_2->c[1] = 1;
 VAR_2->flags |= VAR_1;
}
