
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_data_buffer {int table; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct scsi_data_buffer *VAR_3, int VAR_4,
         gfp_t VAR_5)
{
 int VAR_6;

 FUNC_0(!VAR_4);

 VAR_6 = FUNC_1(&VAR_3->table, VAR_4, VAR_0,
          VAR_5, VAR_1);
 if (FUNC_3(VAR_6))
  FUNC_2(&VAR_3->table, VAR_0,
    VAR_2);

 return VAR_6;
}
