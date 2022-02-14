
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct TYPE_6__ {scalar_t__ LastCurrentStatusTime; size_t CurrentStatusLength; int ProgressBufferLength; unsigned char* CurrentStatusBuffer; unsigned char* ProgressBuffer; } ;
typedef TYPE_1__ DAC960_Controller_T ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct seq_file*,char*,int,unsigned char*) ;
 int FUNC_5 (unsigned char*,unsigned char*) ;
 int FUNC_6 (unsigned char*) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_1, void *VAR_2)
{
  DAC960_Controller_T *VAR_3 = (DAC960_Controller_T *) VAR_1->private;
  unsigned char *VAR_4 =
    "No Rebuild or Consistency Check in Progress\n";
  int VAR_5 = FUNC_6(VAR_4);
  if (VAR_0 != VAR_3->LastCurrentStatusTime)
    {
      VAR_3->CurrentStatusLength = 0;
      FUNC_0(VAR_3);
      FUNC_2(VAR_3);
      FUNC_3(VAR_3);
      if (VAR_3->ProgressBufferLength > 0)
 VAR_5 = VAR_3->ProgressBufferLength;
      if (FUNC_1(VAR_3, 2 + VAR_5))
 {
   unsigned char *VAR_6 = VAR_3->CurrentStatusBuffer;
   VAR_6[VAR_3->CurrentStatusLength++] = ' ';
   VAR_6[VAR_3->CurrentStatusLength++] = ' ';
   if (VAR_3->ProgressBufferLength > 0)
     FUNC_5(&VAR_6[VAR_3->CurrentStatusLength],
     VAR_3->ProgressBuffer);
   else
     FUNC_5(&VAR_6[VAR_3->CurrentStatusLength],
     VAR_4);
   VAR_3->CurrentStatusLength += VAR_5;
 }
      VAR_3->LastCurrentStatusTime = VAR_0;
    }
 FUNC_4(VAR_1, "%.*s", VAR_3->CurrentStatusLength, VAR_3->CurrentStatusBuffer);
 return 0;
}
