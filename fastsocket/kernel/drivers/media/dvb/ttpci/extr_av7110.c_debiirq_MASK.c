
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int recording; } ;
struct av7110 {int debitype; int* debi_virt; int debilen; int debilock; int * num; int ci_rbuffer; TYPE_1__* ci_slot; int * handle2filter; int * p2t; TYPE_2__ demux; int dev; } ;
typedef int s8 ;
struct TYPE_3__ {int flags; } ;


 int FUNC_0 (struct av7110*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct av7110*,int*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int*,int,int *,int ,int ,int ,struct av7110*) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_3 (int *,int*,int) ;
 int * FUNC_4 (unsigned char) ;
 int FUNC_5 (int *,int*,int) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (TYPE_2__*,int const*,int) ;
 int FUNC_8 (struct av7110*,int ,unsigned int,int ,int) ;
 int VAR_9 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(unsigned long VAR_10)
{
 struct av7110 *VAR_11 = (struct av7110 *)VAR_10;
 int VAR_12 = VAR_11->debitype;
 int VAR_13 = (VAR_12 >> 8) & 0x1f;
 unsigned int VAR_14 = 0;

 FUNC_9("debi");
 FUNC_6(4, "type 0x%04x\n", VAR_12);

 if (VAR_12 == -1) {
  FUNC_10("DEBI irq oops @ %ld, psr:0x%08x, ssr:0x%08x\n",
         VAR_9, FUNC_11(VAR_11->dev, VAR_4),
         FUNC_11(VAR_11->dev, VAR_7));
  goto debi_done;
 }
 VAR_11->debitype = -1;

 switch (VAR_12 & 0xff) {

 case 128:
  FUNC_7(&VAR_11->demux,
      (const u8 *) VAR_11->debi_virt,
      VAR_11->debilen / 188);
  VAR_14 = VAR_5;
  break;

 case 130:
  if (VAR_11->demux.recording)
   FUNC_3(&VAR_11->p2t[VAR_13],
      (u8 *) VAR_11->debi_virt,
      VAR_11->debilen);
  VAR_14 = VAR_5;
  break;

 case 132:
 case 133:
 case 129:
  if (VAR_11->handle2filter[VAR_13])
   FUNC_2((u8 *)VAR_11->debi_virt,
          VAR_11->debilen, ((void*)0), 0,
          VAR_11->handle2filter[VAR_13],
          VAR_3, VAR_11);
  VAR_14 = VAR_5;
  break;

 case 137:
 {
  u8 *VAR_15 = VAR_11->debi_virt;

  if ((VAR_15[0] < 2) && VAR_15[2] == 0xff) {
   int VAR_16 = 0;
   if (VAR_15[5] > 0)
    VAR_16 |= VAR_0;
   if (VAR_15[5] > 5)
    VAR_16 |= VAR_1;
   VAR_11->ci_slot[VAR_15[0]].flags = VAR_16;
  } else
   FUNC_5(&VAR_11->ci_rbuffer,
        VAR_11->debi_virt,
        VAR_11->debilen);
  VAR_14 = VAR_5;
  break;
 }

 case 135:
  FUNC_1(VAR_11, (u8 *)VAR_11->debi_virt, VAR_11->debilen);
  VAR_14 = VAR_5;
  break;

 case 134:
  ((s8*)VAR_11->debi_virt)[VAR_6 - 1] = 0;
  FUNC_10("%s\n", (s8 *) VAR_11->debi_virt);
  VAR_14 = VAR_5;
  break;

 case 136:
  FUNC_6(4, "debi DATA_CI_PUT\n");
 case 131:
  FUNC_6(4, "debi DATA_MPEG_PLAY\n");
 case 138:
  FUNC_6(4, "debi DATA_BMP_LOAD\n");
  VAR_14 = VAR_8;
  break;
 default:
  break;
 }
debi_done:
 FUNC_12(&VAR_11->debilock);
 if (VAR_14)
  FUNC_8(VAR_11, VAR_2, VAR_14, 0, 2);
 FUNC_0(VAR_11);
 FUNC_13(&VAR_11->debilock);
}
