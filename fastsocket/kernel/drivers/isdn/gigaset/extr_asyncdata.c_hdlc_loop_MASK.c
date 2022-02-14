
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int tail; } ;
struct inbuf_t {int inputstate; struct bc_state* bcs; struct cardstate* cs; } ;
struct cardstate {scalar_t__ dle; int dev; } ;
struct bc_state {int inputstate; scalar_t__ fcs; unsigned char emptycount; int ignore; struct sk_buff* skb; } ;
typedef scalar_t__ __u16 ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned char VAR_12 ;
 int VAR_13 ;
 unsigned char* FUNC_0 (struct sk_buff*,int) ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned char) ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct sk_buff*,struct cardstate*,struct bc_state*) ;
 int FUNC_9 (struct sk_buff*,struct cardstate*,struct bc_state*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (unsigned char) ;
 int FUNC_12 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static inline int FUNC_14(unsigned char VAR_14, unsigned char *VAR_15, int VAR_16,
       struct inbuf_t *VAR_17)
{
 struct cardstate *VAR_18 = VAR_17->cs;
 struct bc_state *VAR_19 = VAR_17->bcs;
 int VAR_20 = VAR_19->inputstate;
 __u16 VAR_21 = VAR_19->fcs;
 struct sk_buff *VAR_22 = VAR_19->skb;
 unsigned char VAR_23;
 struct sk_buff *VAR_24;
 int VAR_25 = VAR_16;
 int VAR_26;

 if (FUNC_13(VAR_20 & VAR_5)) {
  VAR_20 &= ~VAR_5;
  goto byte_stuff;
 }
 for (;;) {
  if (FUNC_13(VAR_14 == VAR_8)) {
   if (FUNC_13(!VAR_16)) {
    VAR_20 |= VAR_5;
    break;
   }
   VAR_14 = *VAR_15++;
   --VAR_16;
   if (FUNC_13(VAR_14 == VAR_1 &&
         (VAR_18->dle ||
          VAR_17->inputstate & VAR_4))) {
    VAR_17->inputstate |= VAR_3;
    VAR_20 |= VAR_5;
    break;
   }
byte_stuff:
   VAR_14 ^= VAR_12;
   if (FUNC_13(!FUNC_11(VAR_14)))
    FUNC_7(VAR_0, "byte stuffed: 0x%02x", VAR_14);
  } else if (FUNC_13(VAR_14 == VAR_9)) {
   if (FUNC_13(VAR_20 & VAR_7)) {
    VAR_23 = 1;
    FUNC_8(((void*)0), VAR_18, VAR_19);
   } else if (!(VAR_20 & VAR_6)) {



    break;
   } else {
    FUNC_7(VAR_0,
     "7e----------------------------");


    VAR_23 = 0;

    if (FUNC_13(VAR_21 != VAR_10)) {
     FUNC_3(VAR_18->dev,
    "Checksum failed, %u bytes corrupted!\n",
      VAR_22->len);
     VAR_24 = ((void*)0);
     FUNC_8(VAR_24, VAR_18, VAR_19);
     VAR_23 = 1;
    } else {
     if (FUNC_10((VAR_26 = VAR_22->len) > 2)) {
      VAR_22->tail -= 2;
      VAR_22->len -= 2;
     } else {
      FUNC_4(VAR_22);
      VAR_22 = ((void*)0);
      VAR_20 |= VAR_7;
      if (VAR_26 == 1) {
       FUNC_3(VAR_18->dev,
        "invalid packet size (1)!\n");
       VAR_23 = 1;
       FUNC_8(((void*)0),
        VAR_18, VAR_19);
      }
     }
     if (FUNC_10(!(VAR_23 ||
           (VAR_20 &
            VAR_7)))) {
      FUNC_9(VAR_22, VAR_18, VAR_19);
     }
    }
   }

   if (FUNC_13(VAR_23))
    if (VAR_22)
     FUNC_4(VAR_22);

   VAR_21 = VAR_11;
   VAR_20 &= ~(VAR_6 | VAR_7);
   if (FUNC_13(VAR_19->ignore)) {
    VAR_20 |= VAR_7;
    VAR_22 = ((void*)0);
   } else if (FUNC_10((VAR_22 = FUNC_2(VAR_13 + VAR_2)) != ((void*)0))) {
    FUNC_12(VAR_22, VAR_2);
   } else {
    FUNC_6(VAR_18->dev,
      "could not allocate new skb\n");
    VAR_20 |= VAR_7;
   }

   break;
  } else if (FUNC_13(FUNC_11(VAR_14))) {

   FUNC_7(VAR_0, "not byte stuffed: 0x%02x", VAR_14);
  }
  VAR_20 |= VAR_6;

  if (FUNC_10(!(VAR_20 & VAR_7))) {
   if (FUNC_13(VAR_22->len == VAR_13)) {
    FUNC_6(VAR_18->dev, "received packet too long\n");
    FUNC_5(VAR_22);
    VAR_22 = ((void*)0);
    VAR_20 |= VAR_7;
    break;
   }
   *FUNC_0(VAR_22, 1) = VAR_14;
   VAR_21 = FUNC_1(VAR_21, VAR_14);
  }

  if (FUNC_13(!VAR_16))
   break;
  VAR_14 = *VAR_15++;
  --VAR_16;
  if (FUNC_13(VAR_14 == VAR_1 &&
        (VAR_18->dle ||
         VAR_17->inputstate & VAR_4))) {
   VAR_17->inputstate |= VAR_3;
   break;
  }
 }
 VAR_19->inputstate = VAR_20;
 VAR_19->fcs = VAR_21;
 VAR_19->skb = VAR_22;
 return VAR_25 - VAR_16;
}
