
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct ipath_message_header {int * bth; } ;
struct ipath_devdata {scalar_t__ ipath_ibcctrl; scalar_t__ ipath_lli_counter; int ipath_lli_errors; } ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int ,char*,int,int,int ,int ,int,int,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ipath_devdata *VAR_5,
        u32 VAR_6,
        u32 VAR_7,
        u32 VAR_8,
        __le32 *VAR_9,
        struct ipath_message_header *VAR_10)
{
 char VAR_11[128];

 FUNC_1(VAR_6, VAR_11, sizeof VAR_11);
 FUNC_2(VAR_4, "RHFerrs %x hdrqtail=%x typ=%u "
     "tlen=%x opcode=%x egridx=%x: %s\n",
     VAR_6, VAR_7,
     FUNC_4(VAR_9),
     FUNC_3(VAR_9),
     FUNC_0(VAR_10->bth[0]) >> 24,
     VAR_8, VAR_11);


 if (VAR_6 & (VAR_2 | VAR_3)) {
  u8 VAR_12 = (VAR_5->ipath_ibcctrl >>
   VAR_1) &
   VAR_0;

  if (++VAR_5->ipath_lli_counter > VAR_12) {
   VAR_5->ipath_lli_counter = 0;
   VAR_5->ipath_lli_errors++;
  }
 }
}
