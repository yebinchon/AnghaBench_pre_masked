
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _getopt_data {int __posixly_correct; int __nonoption_flags_max_len; int __nonoption_flags_len; void* __ordering; int * __nextchar; int optind; int __last_nonopt; int __first_nonopt; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 char* const* VAR_5 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static const char *
FUNC_5 (int VAR_6, char *const *VAR_7, const char *VAR_8,
      struct _getopt_data *VAR_9)
{




  VAR_9->__first_nonopt = VAR_9->__last_nonopt = VAR_9->optind;

  VAR_9->__nextchar = ((void*)0);

  VAR_9->__posixly_correct = !!FUNC_1 ("POSIXLY_CORRECT");



  if (VAR_8[0] == '-')
    {
      VAR_9->__ordering = VAR_2;
      ++VAR_8;
    }
  else if (VAR_8[0] == '+')
    {
      VAR_9->__ordering = VAR_1;
      ++VAR_8;
    }
  else if (VAR_9->__posixly_correct)
    VAR_9->__ordering = VAR_1;
  else
    VAR_9->__ordering = VAR_0;
  return VAR_8;
}
