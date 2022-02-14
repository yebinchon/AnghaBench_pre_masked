
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ scan1; scalar_t__ scan2; unsigned int mode; int stopped; } ;
struct saa7134_dev {int automute; int last_carrier; TYPE_2__ thread; TYPE_3__* tvaudio; TYPE_1__* tvnorm; scalar_t__ ctl_automute; } ;
struct TYPE_13__ {int std; int carr; } ;
struct TYPE_12__ {int std; int carr1; } ;
struct TYPE_10__ {int id; int name; } ;


 unsigned int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 () ;
 TYPE_6__* VAR_8 ;
 int FUNC_3 (struct saa7134_dev*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct saa7134_dev*) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 TYPE_3__* VAR_9 ;
 int FUNC_10 (struct saa7134_dev*,TYPE_6__*) ;
 int FUNC_11 (struct saa7134_dev*,TYPE_3__*) ;
 int FUNC_12 (struct saa7134_dev*,int,int) ;
 int FUNC_13 (struct saa7134_dev*,TYPE_3__*,char*) ;
 int FUNC_14 (struct saa7134_dev*,TYPE_3__*,int) ;
 scalar_t__ FUNC_15 (struct saa7134_dev*,int) ;

__attribute__((used)) static int FUNC_16(void *VAR_10)
{
 struct saa7134_dev *VAR_11 = VAR_10;
 int VAR_12[FUNC_0(VAR_8)];
 unsigned int VAR_13, VAR_14, VAR_15;
 int VAR_16,VAR_17,VAR_18,VAR_19,VAR_20,VAR_21,VAR_22;

 FUNC_8();

 for (;;) {
  FUNC_15(VAR_11,-1);
  if (FUNC_2())
   goto done;

 restart:
  FUNC_9();

  VAR_11->thread.scan1 = VAR_11->thread.scan2;
  FUNC_1("tvaudio thread scan start [%d]\n",VAR_11->thread.scan1);
  VAR_11->tvaudio = ((void*)0);

  FUNC_7(VAR_1, 0xa0);
  FUNC_7(VAR_0, 0x80);

  if (VAR_11->ctl_automute)
   VAR_11->automute = 1;

  FUNC_3(VAR_11);


  if (FUNC_15(VAR_11,VAR_3))
   goto restart;

  VAR_16 = 0;
  VAR_17 = 0;
  VAR_15 = 0;
  VAR_18 = 0;
  VAR_22 = 0;
  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_8); VAR_13++) {
   if (!(VAR_11->tvnorm->id & VAR_8[VAR_13].std))
    continue;
   if (!VAR_22)
    VAR_22 = VAR_8[VAR_13].carr;
   VAR_15++;
  }

  if (1 == VAR_15) {

   FUNC_1("only one main carrier candidate - skipping scan\n");
   VAR_16 = 12345;
   VAR_18 = VAR_22;
  } else {

   FUNC_7(VAR_1,0x00);
   FUNC_13(VAR_11,&VAR_9[0],((void*)0));
   for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_8); VAR_13++) {
    VAR_12[VAR_13] = FUNC_10(VAR_11, VAR_8+VAR_13);
    if (VAR_11->thread.scan1 != VAR_11->thread.scan2)
     goto restart;
   }
   for (VAR_16 = 0, VAR_17 = 0, VAR_13 = 0; VAR_13 < FUNC_0(VAR_8); VAR_13++) {
    if (VAR_16 < VAR_12[VAR_13]) {
     VAR_17 = VAR_16;
     VAR_16 = VAR_12[VAR_13];
     VAR_18 = VAR_8[VAR_13].carr;
    } else if (VAR_17 < VAR_12[VAR_13]) {
     VAR_17 = VAR_12[VAR_13];
    }
   }
  }

  if (0 != VAR_18 && VAR_16 > 2000 && VAR_16 > VAR_17*3) {

   FUNC_1("found %s main sound carrier @ %d.%03d MHz [%d/%d]\n",
    VAR_11->tvnorm->name, VAR_18/1000, VAR_18%1000,
    VAR_16, VAR_17);
   VAR_11->last_carrier = VAR_18;

  } else if (0 != VAR_11->last_carrier) {

   VAR_18 = VAR_11->last_carrier;
   FUNC_1("audio carrier scan failed, "
    "using %d.%03d MHz [last detected]\n",
    VAR_18/1000, VAR_18%1000);

  } else {

   VAR_18 = VAR_22;
   FUNC_1("audio carrier scan failed, "
    "using %d.%03d MHz [default]\n",
    VAR_18/1000, VAR_18%1000);
  }
  FUNC_12(VAR_11,VAR_18,VAR_18);
  VAR_11->automute = 0;
  FUNC_6(VAR_2, 0x30, 0x00);
  FUNC_5(VAR_11);

  for (VAR_14 = VAR_6, VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
   if (VAR_11->tvnorm->id != VAR_6 &&
    !(VAR_11->tvnorm->id & VAR_9[VAR_13].std))
    continue;
   if (VAR_9[VAR_13].carr1 != VAR_18)
    continue;

   if (VAR_6 == VAR_14)
    VAR_14 = VAR_13;
   FUNC_13(VAR_11,&VAR_9[VAR_13],"trying");
   if (FUNC_15(VAR_11,VAR_4))
    goto restart;
   if (-1 != FUNC_11(VAR_11,&VAR_9[VAR_13])) {
    VAR_14 = VAR_13;
    break;
   }
  }
  FUNC_6(VAR_2, 0x30, 0x30);
  if (VAR_6 == VAR_14)
   continue;
  FUNC_13(VAR_11,&VAR_9[VAR_14],"using");

  FUNC_14(VAR_11,&VAR_9[VAR_14],VAR_7);
  VAR_11->tvaudio = &VAR_9[VAR_14];

  VAR_21 = 42;
  for (;;) {

   FUNC_9();

   if (FUNC_15(VAR_11,5000))
    goto restart;
   if (FUNC_2())
    break;
   if (VAR_6 == VAR_11->thread.mode) {
    VAR_19 = FUNC_11(VAR_11,&VAR_9[VAR_13]);
    VAR_20 = FUNC_4(VAR_19);
   } else {
    VAR_20 = VAR_11->thread.mode;
   }
   if (VAR_21 != VAR_20) {
    FUNC_14(VAR_11,&VAR_9[VAR_14],VAR_20);
    VAR_21 = VAR_20;
   }
  }
 }

 done:
 VAR_11->thread.stopped = 1;
 return 0;
}
