
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * typefilter_t ;
typedef int memory_object_size_t ;
typedef int memory_object_offset_t ;
typedef int mach_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int ,int ,int *,int ) ;

__attribute__((used)) static mach_port_t FUNC_2(typefilter_t VAR_4)
{
 FUNC_0(VAR_4 != ((void*)0));

 mach_port_t VAR_5 = VAR_0;
 memory_object_size_t VAR_6 = VAR_1;

 FUNC_1(VAR_3,
      &VAR_6,
      (memory_object_offset_t)VAR_4,
      VAR_2,
      &VAR_5,
      VAR_0);

 return VAR_5;
}
