
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int word ;
typedef int dlc ;
typedef int byte ;
struct TYPE_13__ {int manufacturer_features; } ;
struct TYPE_12__ {scalar_t__ length; int * info; } ;
struct TYPE_11__ {int B2_prot; int B3_prot; int rx_dma_descriptor; int rx_dma_magic; int call_dir; TYPE_1__* appl; TYPE_9__* adapter; } ;
struct TYPE_10__ {int MaxDataLength; } ;
typedef TYPE_2__ PLCI ;
typedef TYPE_3__ API_PARSE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_9__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (int*,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_3 (TYPE_2__*,int ,int*) ;
 scalar_t__ FUNC_4 (int *,int,char*,TYPE_3__*) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_2__*,int*) ;
 int VAR_25 ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static word FUNC_8 (PLCI * VAR_26, API_PARSE* VAR_27)
{
  static byte VAR_28[12] = {1,1};
  static byte VAR_29[3] = {2,0,0};
  static byte VAR_30[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    API_PARSE VAR_31[2];
  word VAR_32;
  word VAR_33 = 0;

  for(VAR_32=0;VAR_32<2;VAR_32++) VAR_31[VAR_32].length = 0;
  for(VAR_32=0;VAR_32<sizeof(VAR_30);VAR_32++) VAR_30[VAR_32] = 0;

  if (((FUNC_1(VAR_27[0].info) == VAR_0)
    && (FUNC_1(VAR_27[1].info) != VAR_1))
   || ((FUNC_1(VAR_27[0].info) != VAR_0)
    && (FUNC_1(VAR_27[1].info) != VAR_2)))
  {
    return (VAR_23);
  }
  if ((FUNC_1(VAR_27[2].info) != VAR_3)
   && (FUNC_1(VAR_27[2].info) != VAR_4))
  {
    return (VAR_23);
  }

  VAR_26->B2_prot = (byte) FUNC_1(VAR_27[1].info);
  VAR_26->B3_prot = (byte) FUNC_1(VAR_27[2].info);

  if ((FUNC_1(VAR_27[1].info) == VAR_1) && VAR_27[4].length)
  {
    if (FUNC_4 (&VAR_27[4].info[1],
                  (word)VAR_27[4].length, "w",
                  VAR_31))
    {
      return (VAR_24);
    }
    VAR_33 = FUNC_1(VAR_31[0].info);
  }



  VAR_28[0] = 1;
  VAR_28[1] = 1;
  if (VAR_26->adapter->manufacturer_features & VAR_17)
    VAR_28[1] |= 2;
  if (VAR_26->adapter->manufacturer_features & VAR_16)
    VAR_28[1] |= 4;

  if ((VAR_28[1] & 0x02) && (VAR_25 & VAR_7)) {
    VAR_28[1] |= 0x10;
    if (VAR_26->rx_dma_descriptor <= 0) {
      VAR_26->rx_dma_descriptor=FUNC_6(VAR_26,&VAR_26->rx_dma_magic);
      if (VAR_26->rx_dma_descriptor >= 0)
        VAR_26->rx_dma_descriptor++;
    }
    if (VAR_26->rx_dma_descriptor > 0) {
      VAR_28[1] |= 0x40;
      VAR_28[0] = 6;
      VAR_28[2] = (byte)(VAR_26->rx_dma_descriptor - 1);
      VAR_28[3] = (byte)VAR_26->rx_dma_magic;
      VAR_28[4] = (byte)(VAR_26->rx_dma_magic >> 8);
      VAR_28[5] = (byte)(VAR_26->rx_dma_magic >> 16);
      VAR_28[6] = (byte)(VAR_26->rx_dma_magic >> 24);
    }
  }

  if (FUNC_0(VAR_26->adapter)) {
    VAR_28[1] |= 0x20;
  }

  VAR_29[1] = (VAR_26->call_dir & (VAR_6 | VAR_5)) ?
            10 : 9;
  VAR_29[2] = 4;
  FUNC_3(VAR_26, VAR_15, VAR_28);
  FUNC_3(VAR_26, VAR_14, VAR_29);
  VAR_32 = 1;
  FUNC_2 (&VAR_30[VAR_32], VAR_26->appl->MaxDataLength);
  VAR_32 += 2;
  if (FUNC_1(VAR_27[1].info) == VAR_1)
  {
    if (VAR_27[4].length)
  {
    FUNC_5(1, FUNC_7("MDM b2_config=%02x", VAR_33));
    VAR_30[VAR_32++] = 3;
    VAR_30[VAR_32++] = 1;
    VAR_30[VAR_32++] = 7;
    VAR_30[VAR_32++] = 7;
    VAR_30[VAR_32++] = 0;
    VAR_30[VAR_32++] = 0;

    if (VAR_33 & VAR_22)
    {
      VAR_30[VAR_32] |= VAR_12;
    }
    if (VAR_33 & VAR_19)
    {
      VAR_30[VAR_32] |= VAR_10;
    }
    if (VAR_33 & VAR_20)
    {
      VAR_30[VAR_32] |= VAR_13;
    }
    if (VAR_33 & VAR_21)
    {
      VAR_30[VAR_32] |= VAR_11;
    }
    if (VAR_33 & VAR_18)
    {
      VAR_30[VAR_32] |= VAR_9;
    }
    VAR_32++;
  }
  }
  else
  {
    VAR_30[VAR_32++] = 3;
    VAR_30[VAR_32++] = 1;
    VAR_30[VAR_32++] = 7;
    VAR_30[VAR_32++] = 7;
    VAR_30[VAR_32++] = 0;
    VAR_30[VAR_32++] = 0;
    VAR_30[VAR_32++] = VAR_12 |
               VAR_10 |
               VAR_11 |
               VAR_9;
  }
  VAR_30[0] = (byte)(VAR_32 - 1);

  FUNC_3(VAR_26, VAR_8, VAR_30);
  return (0);
}
