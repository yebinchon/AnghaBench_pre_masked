
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* in; scalar_t__ ucode; int getflags; int out; int urlflags; } ;
typedef scalar_t__ CURLUcode ;
typedef int CURLU ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,int ,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,char*,int ) ;
 int FUNC_4 (int ,char*,char*,int,scalar_t__) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(void)
{
  int VAR_3;
  int VAR_4 = 0;
  for(VAR_3 = 0; VAR_1[VAR_3].in && !VAR_4; VAR_3++) {
    CURLUcode VAR_5;
    CURLU *VAR_6 = FUNC_1();
    if(!VAR_6) {
      VAR_4++;
      break;
    }
    VAR_5 = FUNC_3(VAR_6, VAR_0,
                      VAR_1[VAR_3].in,
                      VAR_1[VAR_3].urlflags);
    if(VAR_5 != VAR_1[VAR_3].ucode) {
      FUNC_4(VAR_2, "Get parts\nin: %s\nreturned %d (expected %ld)\n",
              VAR_1[VAR_3].in, (int)VAR_5, VAR_1[VAR_3].ucode);
      VAR_4++;
    }
    else if(VAR_1[VAR_3].ucode) {

    }
    else if(FUNC_0(VAR_6, VAR_1[VAR_3].in, VAR_1[VAR_3].out,
                       VAR_1[VAR_3].getflags))
      VAR_4++;
    FUNC_2(VAR_6);
  }
  return VAR_4;
}
