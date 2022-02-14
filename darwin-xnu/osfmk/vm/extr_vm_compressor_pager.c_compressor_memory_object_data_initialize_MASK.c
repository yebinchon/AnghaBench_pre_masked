
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int memory_object_t ;
typedef scalar_t__ memory_object_offset_t ;
typedef scalar_t__ memory_object_cluster_size_t ;
typedef int kern_return_t ;
typedef int compressor_pager_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

kern_return_t
FUNC_4(
 memory_object_t VAR_2,
 memory_object_offset_t VAR_3,
 memory_object_cluster_size_t VAR_4)
{
 compressor_pager_t VAR_5;
 memory_object_offset_t VAR_6;

 FUNC_1(VAR_2, VAR_5);
 FUNC_0(VAR_5);

 for (VAR_6 = VAR_3;
      VAR_6 < VAR_3 + VAR_4;
      VAR_6 += VAR_1) {
  FUNC_3("do a data_return() if slot for this page is empty");
 }

 FUNC_2(VAR_5);

 return VAR_0;
}
