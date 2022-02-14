
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct align_header {int offset; int length; } ;
typedef int OSMallocTag ;


 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(
 void *VAR_0,
 OSMallocTag VAR_1)
{
 struct align_header *VAR_2 = (struct align_header*)(void *)((u_int8_t*)VAR_0 - sizeof(*VAR_2));
 FUNC_0(((char*)VAR_0) - VAR_2->offset, VAR_2->length, VAR_1);
}
