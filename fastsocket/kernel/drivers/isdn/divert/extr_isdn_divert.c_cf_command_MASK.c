
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ulong ;
typedef int u_char ;
struct TYPE_6__ {int proc; int timeout; int datalen; char* data; scalar_t__ ll_id; } ;
struct TYPE_7__ {TYPE_1__ dss1_io; } ;
struct TYPE_8__ {int driver; TYPE_2__ parm; int arg; int command; } ;
struct TYPE_9__ {scalar_t__ data; int function; } ;
struct call_struc {char* info; struct call_struc* next; int * prev; TYPE_3__ ics; TYPE_4__ timer; } ;
struct TYPE_10__ {int (* ll_cmd ) (TYPE_3__*) ;int (* drv_to_name ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct call_struc* VAR_9 ;
 TYPE_5__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct call_struc*) ;
 struct call_struc* FUNC_2 (int,int ) ;
 int VAR_12 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (char*,char*,int,scalar_t__,char*,int ,char*,int,int,char*,char*) ;
 scalar_t__ FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_3__*) ;

int FUNC_11(int VAR_13, int VAR_14,
               u_char VAR_15, char *VAR_16,
               u_char VAR_17, char *VAR_18, ulong *VAR_19)
{ unsigned long VAR_20;
  int VAR_21,VAR_22;
  int VAR_23;
  char *VAR_24,*VAR_25,VAR_26[60];
  struct call_struc *VAR_27;

  if (FUNC_6(VAR_16,'.')) return(-VAR_4);
  if ((VAR_15 & 0x7F) > 2) return(-VAR_4);
  VAR_15 &= 3;
  VAR_24 = VAR_26;
  *VAR_24++ = 0x30;
  VAR_25 = VAR_24++;
  *VAR_24++ = 0xa;
  *VAR_24++ = 1;
  *VAR_24++ = VAR_15 & 0x7F;
  *VAR_24++ = 0xa;
  *VAR_24++ = 1;
  *VAR_24++ = VAR_17;

  if (VAR_14 == 1)
   { if (!*VAR_18) return(-VAR_4);
     if (FUNC_6(VAR_18,'.')) return(-VAR_4);
     VAR_23 = FUNC_8(VAR_18);
     *VAR_24++ = 0x30;
     *VAR_24++ = VAR_23 + 2;
     *VAR_24++ = 0x80;
     *VAR_24++ = VAR_23;
     FUNC_7(VAR_24,VAR_18);
     VAR_24 += VAR_23;
   }

  VAR_22 = FUNC_8(VAR_16);
  *VAR_24++ = 0x80;
  if (VAR_22 > 1)
   { *VAR_24++ = VAR_22;
     FUNC_7(VAR_24,VAR_16);
     VAR_24 += VAR_22;
   }
  else *VAR_24++ = 0;

  *VAR_25 = VAR_24 - VAR_25 - 1;


  if (!(VAR_27 = FUNC_2(sizeof(struct call_struc), VAR_6)))
             return(-VAR_5);
  FUNC_0(&VAR_27->timer);
  VAR_27->info[0] = '\0';
  VAR_27->timer.function = VAR_8;
  VAR_27->timer.data = (ulong) VAR_27;
  VAR_27->ics.driver = VAR_13;
  VAR_27->ics.command = VAR_7;
  VAR_27->ics.arg = VAR_3;
  VAR_27->ics.parm.dss1_io.proc = (VAR_14 == 1) ? 7: (VAR_14 == 2) ? 11:8;
  VAR_27->ics.parm.dss1_io.timeout = 4000;
  VAR_27->ics.parm.dss1_io.datalen = VAR_24 - VAR_26;
  VAR_27->ics.parm.dss1_io.data = VAR_26;

  FUNC_3(&VAR_11, VAR_20);
  VAR_27->ics.parm.dss1_io.ll_id = VAR_12++;
  FUNC_4(&VAR_11, VAR_20);
  *VAR_19 = VAR_27->ics.parm.dss1_io.ll_id;

  FUNC_5(VAR_27->info,"%d 0x%lx %s%s 0 %s %02x %d%s%s\n",
   (!VAR_14 ) ? VAR_1 : (VAR_14 == 1) ? VAR_0 : VAR_2,
          VAR_27->ics.parm.dss1_io.ll_id,
          (VAR_14 != 2) ? "" : "0 ",
          VAR_10.drv_to_name(VAR_27->ics.driver),
          VAR_16,
          VAR_17 & 0xFF,
          VAR_15,
          (VAR_14 != 1) ? "" : " 0 ",
          (VAR_14 != 1) ? "" : VAR_18);

  VAR_21 = VAR_10.ll_cmd(&VAR_27->ics);

  if (!VAR_21)
   { VAR_27->prev = ((void*)0);
     FUNC_3(&VAR_11, VAR_20);
     VAR_27->next = VAR_9;
     VAR_9 = VAR_27;
     FUNC_4(&VAR_11, VAR_20);
   }
  else
   FUNC_1(VAR_27);
  return(VAR_21);
}
