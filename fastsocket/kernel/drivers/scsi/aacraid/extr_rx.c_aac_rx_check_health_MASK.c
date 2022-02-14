
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct aac_dev {int pdev; } ;
typedef int dma_addr_t ;
typedef void* __le32 ;
struct TYPE_2__ {int * IMRx; int * OMRx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int) ;
 void* FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,int,...) ;
 int FUNC_5 (struct aac_dev*,int ) ;
 int FUNC_6 (struct aac_dev*,int ,int ,int ,int ,int ,int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_7 (struct aac_dev*,int ,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct aac_dev *VAR_5)
{
 u32 VAR_6 = FUNC_5(VAR_5, VAR_3.OMRx[0]);




 if (FUNC_8(VAR_6 & VAR_4))
  return -1;



 if (FUNC_8(VAR_6 & VAR_1)) {
  char * VAR_7;
  struct POSTSTATUS {
   __le32 Post_Command;
   __le32 Post_Address;
  } * VAR_8;
  dma_addr_t VAR_9, VAR_10;
  int VAR_11;

  if (FUNC_1((VAR_6 & 0xFF000000L) == 0xBC000000L))
   return (VAR_6 >> 16) & 0xFF;
  VAR_7 = FUNC_3(VAR_5->pdev, 512, &VAR_10);
  VAR_11 = -2;
  if (FUNC_8(VAR_7 == ((void*)0)))
   return VAR_11;
  VAR_8 = FUNC_3(VAR_5->pdev,
    sizeof(struct POSTSTATUS), &VAR_9);
  if (FUNC_8(VAR_8 == ((void*)0))) {
   FUNC_4(VAR_5->pdev, 512, VAR_7, VAR_10);
   return VAR_11;
  }
  FUNC_2(VAR_7, 0, 512);
  VAR_8->Post_Command = FUNC_0(VAR_0);
  VAR_8->Post_Address = FUNC_0(VAR_10);
  FUNC_7(VAR_5, VAR_3.IMRx[0], VAR_9);
  FUNC_6(VAR_5, VAR_0, VAR_10, 0, 0, 0, 0, 0,
    ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
  FUNC_4(VAR_5->pdev, sizeof(struct POSTSTATUS),
    VAR_8, VAR_9);
  if (FUNC_1((VAR_7[0] == '0') && ((VAR_7[1] == 'x') || (VAR_7[1] == 'X')))) {
   VAR_11 = (VAR_7[2] <= '9') ? (VAR_7[2] - '0') : (VAR_7[2] - 'A' + 10);
   VAR_11 <<= 4;
   VAR_11 += (VAR_7[3] <= '9') ? (VAR_7[3] - '0') : (VAR_7[3] - 'A' + 10);
  }
  FUNC_4(VAR_5->pdev, 512, VAR_7, VAR_10);
  return VAR_11;
 }



 if (FUNC_8(!(VAR_6 & VAR_2)))
  return -3;



 return 0;
}
