
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_template {char* proc_name; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 scalar_t__* VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_3 (scalar_t__,unsigned int,struct scsi_host_template*) ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct scsi_host_template *VAR_13)
{
 unsigned int VAR_14 = 0, VAR_15;

 VAR_13->proc_name = "eata2x";

 if (FUNC_4(VAR_6))
  FUNC_2(VAR_6);
 for (VAR_15 = VAR_2; VAR_8[VAR_15]; VAR_15++)
  if (VAR_8[VAR_15] == VAR_5)
   continue;
  else if (VAR_8[VAR_15] <= VAR_3) {
   if (!VAR_9)
    VAR_8[VAR_15] = VAR_5;
  } else if (VAR_8[VAR_15] >= VAR_4
      && VAR_8[VAR_15] <= VAR_1) {
   if (!VAR_7)
    VAR_8[VAR_15] = VAR_5;
  }

 if (VAR_11) {
  if (!VAR_12)
   FUNC_0();
  else
   FUNC_1();
 }

 for (VAR_15 = 0; VAR_8[VAR_15]; VAR_15++) {

  if (VAR_8[VAR_15] == VAR_5)
   continue;

  if (VAR_14 < VAR_0 && FUNC_3(VAR_8[VAR_15], VAR_14, VAR_13))
   VAR_14++;
 }

 VAR_10 = VAR_14;
 return VAR_14;
}
