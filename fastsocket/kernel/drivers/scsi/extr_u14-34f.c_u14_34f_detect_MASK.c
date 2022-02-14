
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_template {char* proc_name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned int,struct scsi_host_template*) ;
 int VAR_7 ;
 int ** VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct scsi_host_template *VAR_9) {
   unsigned int VAR_10 = 0, VAR_11;

   VAR_9->proc_name = "u14-34f";

   if(FUNC_2(VAR_4)) FUNC_0(VAR_4);
   for (VAR_11 = 0; VAR_11 < VAR_0 + 1; VAR_11++) VAR_8[VAR_11] = ((void*)0);

   for (VAR_11 = 0; VAR_5[VAR_11]; VAR_11++) {

      if (VAR_5[VAR_11] == VAR_2) continue;

      if (VAR_10 < VAR_0 && FUNC_1(VAR_5[VAR_11], VAR_10, VAR_9)) VAR_10++;
      }

   VAR_6 = VAR_10;
   return VAR_10;
}
