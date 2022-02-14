
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fstioc_info {int valid; scalar_t__ proto; int invertClock; unsigned char lineSpeed; int clockSource; scalar_t__ framing; int structure; int interface; int coding; int lineBuildOut; int equalizer; int transparentMode; int loopMode; int range; int txBufferMode; int rxBufferMode; int startingSlot; int losThreshold; char idleCode; int debug; int cardMode; } ;
struct fst_port_info {size_t index; scalar_t__ mode; } ;
struct fst_card_info {int dummy; } ;
struct TYPE_4__ {int invertClock; } ;
struct TYPE_3__ {int idleCode; int enableIdleCode; int losThreshold; int startingSlot; int rxBufferMode; int txBufferMode; int range; int loopMode; int transparentMode; int equalizer; int lineBuildOut; int coding; int interface; int structure; int framing; int clocking; int dataRate; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct fst_card_info*,int ,int) ;
 int FUNC_1 (struct fst_card_info*,int ,unsigned char) ;
 int FUNC_2 (struct fst_card_info*,int ,int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_2__* VAR_18 ;
 int FUNC_3 (char*,...) ;
 TYPE_1__ VAR_19 ;

__attribute__((used)) static int
FUNC_4(struct fst_card_info *VAR_20, struct fst_port_info *VAR_21,
     struct fstioc_info *VAR_22)
{
 int VAR_23;
 unsigned char VAR_24;





 VAR_23 = 0;
 if (VAR_22->valid & VAR_9) {
  if (VAR_22->proto == VAR_13)
   VAR_21->mode = VAR_13;
  else
   VAR_21->mode = VAR_12;
 }

 if (VAR_22->valid & VAR_5)
  VAR_23 = -VAR_1;

 if (VAR_22->valid & VAR_10)
  VAR_23 = -VAR_1;

 if (VAR_22->valid & VAR_8)
  FUNC_0(VAR_20, VAR_18[VAR_21->index].invertClock,
   VAR_22->invertClock);
 if (VAR_22->valid & VAR_7)
  FUNC_2(VAR_20, VAR_16, VAR_22->cardMode);
 if (VAR_22->valid & VAR_11) {
  FUNC_1(VAR_20, VAR_19.dataRate, VAR_22->lineSpeed);
  FUNC_0(VAR_20, VAR_19.clocking, VAR_22->clockSource);
  VAR_24 = VAR_2;
  if (VAR_22->framing == VAR_0)
   VAR_24 = VAR_2;
  if (VAR_22->framing == VAR_15)
   VAR_24 = VAR_4;
  if (VAR_22->framing == VAR_14)
   VAR_24 = VAR_3;
  FUNC_0(VAR_20, VAR_19.framing, VAR_24);
  FUNC_0(VAR_20, VAR_19.structure, VAR_22->structure);
  FUNC_0(VAR_20, VAR_19.interface, VAR_22->interface);
  FUNC_0(VAR_20, VAR_19.coding, VAR_22->coding);
  FUNC_0(VAR_20, VAR_19.lineBuildOut, VAR_22->lineBuildOut);
  FUNC_0(VAR_20, VAR_19.equalizer, VAR_22->equalizer);
  FUNC_0(VAR_20, VAR_19.transparentMode, VAR_22->transparentMode);
  FUNC_0(VAR_20, VAR_19.loopMode, VAR_22->loopMode);
  FUNC_0(VAR_20, VAR_19.range, VAR_22->range);
  FUNC_0(VAR_20, VAR_19.txBufferMode, VAR_22->txBufferMode);
  FUNC_0(VAR_20, VAR_19.rxBufferMode, VAR_22->rxBufferMode);
  FUNC_0(VAR_20, VAR_19.startingSlot, VAR_22->startingSlot);
  FUNC_0(VAR_20, VAR_19.losThreshold, VAR_22->losThreshold);
  if (VAR_22->idleCode)
   FUNC_0(VAR_20, VAR_19.enableIdleCode, 1);
  else
   FUNC_0(VAR_20, VAR_19.enableIdleCode, 0);
  FUNC_0(VAR_20, VAR_19.idleCode, VAR_22->idleCode);
 }






 return VAR_23;
}
