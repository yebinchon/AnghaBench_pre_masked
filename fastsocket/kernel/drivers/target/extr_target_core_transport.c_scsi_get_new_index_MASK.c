
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef size_t scsi_index_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

u32 FUNC_3(scsi_index_t VAR_3)
{
 u32 VAR_4;

 FUNC_0((VAR_3 < 0) || (VAR_3 >= VAR_0));

 FUNC_1(&VAR_2);
 VAR_4 = ++VAR_1[VAR_3];
 FUNC_2(&VAR_2);

 return VAR_4;
}
