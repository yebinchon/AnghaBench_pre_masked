
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int curl; int file; } ;
struct TYPE_7__ {scalar_t__ buffer_pos; TYPE_1__ handle; int still_running; int type; } ;
typedef TYPE_2__ URL_FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,...) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__,int *) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (char const*,char const*) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ VAR_6 ;
 long VAR_7 ;

URL_FILE *FUNC_10(const char *VAR_8, const char *VAR_9)
{



  URL_FILE *VAR_10;
  (void)VAR_9;

  VAR_10 = FUNC_0(1, sizeof(URL_FILE));
  if(!VAR_10)
    return ((void*)0);

  VAR_10->handle.file = FUNC_8(VAR_8, VAR_9);
  if(VAR_10->handle.file)
    VAR_10->type = VAR_1;

  else {
    VAR_10->type = VAR_0;
    VAR_10->handle.curl = FUNC_2();

    FUNC_3(VAR_10->handle.curl, VAR_2, VAR_8);
    FUNC_3(VAR_10->handle.curl, VAR_4, VAR_10);
    FUNC_3(VAR_10->handle.curl, VAR_3, 0L);
    FUNC_3(VAR_10->handle.curl, VAR_5, VAR_7);

    if(!VAR_6)
      VAR_6 = FUNC_5();

    FUNC_4(VAR_6, VAR_10->handle.curl);


    FUNC_6(VAR_6, &VAR_10->still_running);

    if((VAR_10->buffer_pos == 0) && (!VAR_10->still_running)) {



      FUNC_7(VAR_6, VAR_10->handle.curl);


      FUNC_1(VAR_10->handle.curl);

      FUNC_9(VAR_10);

      VAR_10 = ((void*)0);
    }
  }
  return VAR_10;
}
