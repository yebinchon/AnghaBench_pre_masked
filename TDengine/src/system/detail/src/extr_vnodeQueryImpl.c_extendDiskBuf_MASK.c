
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_3__ {int numOfPages; int bufSize; int meterOutputFd; int meterOutputMMapBuf; } ;
typedef TYPE_1__ SMeterQuerySupportObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int,int,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(SMeterQuerySupportObj *VAR_4, int32_t VAR_5) {
  FUNC_0(VAR_4->numOfPages * VAR_0 == VAR_4->bufSize);

  int32_t VAR_6 = FUNC_3(VAR_4->meterOutputMMapBuf, VAR_4->bufSize);
  VAR_4->numOfPages = VAR_5;


  VAR_6 = FUNC_1(VAR_4->meterOutputFd, VAR_4->numOfPages * VAR_0);
  if (VAR_6 != 0) {
    FUNC_4("error in allocate the disk-based buffer");
    return;
  }

  VAR_4->bufSize = VAR_4->numOfPages * VAR_0;
  VAR_4->meterOutputMMapBuf =
      FUNC_2(((void*)0), VAR_4->bufSize, VAR_2 | VAR_3, VAR_1, VAR_4->meterOutputFd, 0);
}
