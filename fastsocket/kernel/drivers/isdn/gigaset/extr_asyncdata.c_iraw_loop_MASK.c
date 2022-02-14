
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct inbuf_t {int inputstate; struct bc_state* bcs; struct cardstate* cs; } ;
struct cardstate {int dev; scalar_t__ dle; } ;
struct bc_state {int inputstate; int ignore; struct sk_buff* skb; } ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (unsigned char) ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct sk_buff*,struct cardstate*,struct bc_state*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static inline int FUNC_9(unsigned char VAR_7, unsigned char *VAR_8, int VAR_9,
       struct inbuf_t *VAR_10)
{
 struct cardstate *VAR_11 = VAR_10->cs;
 struct bc_state *VAR_12 = VAR_10->bcs;
 int VAR_13 = VAR_12->inputstate;
 struct sk_buff *VAR_14 = VAR_12->skb;
 int VAR_15 = VAR_9;

 for (;;) {

  VAR_13 |= VAR_4;

  if (FUNC_6(!(VAR_13 & VAR_5))) {
   if (FUNC_8(VAR_14->len == VAR_6)) {

    FUNC_4(VAR_11->dev, "received packet too long\n");
    FUNC_3(VAR_14);
    VAR_14 = ((void*)0);
    VAR_13 |= VAR_5;
    break;
   }
   *FUNC_0(VAR_14, 1) = FUNC_1(VAR_7);
  }

  if (FUNC_8(!VAR_9))
   break;
  VAR_7 = *VAR_8++;
  --VAR_9;
  if (FUNC_8(VAR_7 == VAR_0 &&
        (VAR_11->dle ||
         VAR_10->inputstate & VAR_3))) {
   VAR_10->inputstate |= VAR_2;
   break;
  }
 }


 if (FUNC_6(VAR_13 & VAR_4)) {
  if (FUNC_6(!(VAR_13 & VAR_5))) {
   FUNC_5(VAR_14, VAR_11, VAR_12);
  }
  VAR_13 &= ~(VAR_4 | VAR_5);
  if (FUNC_8(VAR_12->ignore)) {
   VAR_13 |= VAR_5;
   VAR_14 = ((void*)0);
  } else if (FUNC_6((VAR_14 = FUNC_2(VAR_6 + VAR_1))
      != ((void*)0))) {
   FUNC_7(VAR_14, VAR_1);
  } else {
   FUNC_4(VAR_11->dev, "could not allocate new skb\n");
   VAR_13 |= VAR_5;
  }
 }

 VAR_12->inputstate = VAR_13;
 VAR_12->skb = VAR_14;
 return VAR_15 - VAR_9;
}
