
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int TupleCode; int Attributes; int DesiredTuple; } ;
typedef TYPE_1__ tuple_t ;
struct pcmcia_socket {int dev; } ;
typedef TYPE_1__ cisparse_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int *,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (struct pcmcia_socket*,int ,TYPE_1__*) ;
 int FUNC_4 (struct pcmcia_socket*,int ,TYPE_1__*) ;
 int FUNC_5 (struct pcmcia_socket*,int ,int ,TYPE_1__*) ;

int FUNC_6(struct pcmcia_socket *VAR_15, unsigned int *VAR_16)
{
    tuple_t *VAR_17;
    cisparse_t *VAR_18;
    unsigned int VAR_19 = 0;
    int VAR_20, VAR_21, VAR_22 = 0, VAR_23 = 0;

    if (!VAR_15)
 return -VAR_7;

    VAR_17 = FUNC_2(sizeof(*VAR_17), VAR_10);
    if (VAR_17 == ((void*)0)) {
     FUNC_0(VAR_11, &VAR_15->dev, "no memory to validate CIS\n");
     return -VAR_8;
    }
    VAR_18 = FUNC_2(sizeof(*VAR_18), VAR_10);
    if (VAR_18 == ((void*)0)) {
     FUNC_1(VAR_17);
     FUNC_0(VAR_11, &VAR_15->dev, "no memory to validate CIS\n");
     return -VAR_8;
    }

    VAR_19 = VAR_21 = 0;
    VAR_17->DesiredTuple = VAR_13;
    VAR_17->Attributes = VAR_14;
    VAR_20 = FUNC_3(VAR_15, VAR_0, VAR_17);
    if (VAR_20 != 0)
 goto done;



    if ((VAR_17->TupleCode == VAR_3) ||
 (FUNC_5(VAR_15, VAR_0, VAR_1, VAR_18) == 0) ||
 (FUNC_5(VAR_15, VAR_0, VAR_2, VAR_18) == 0))
 VAR_22++;




    if ((FUNC_5(VAR_15, VAR_0, VAR_4, VAR_18) == 0) ||
 (FUNC_5(VAR_15, VAR_0, VAR_5, VAR_18) == 0) ||
 (FUNC_5(VAR_15, VAR_0, VAR_6, VAR_18) != -VAR_9))
 VAR_23++;

    if (!VAR_22 && !VAR_23)
 goto done;

    for (VAR_19 = 1; VAR_19 < VAR_12; VAR_19++) {
 VAR_20 = FUNC_4(VAR_15, VAR_0, VAR_17);
 if (VAR_20 != 0)
  break;
 if (((VAR_17->TupleCode > 0x23) && (VAR_17->TupleCode < 0x40)) ||
     ((VAR_17->TupleCode > 0x47) && (VAR_17->TupleCode < 0x80)) ||
     ((VAR_17->TupleCode > 0x90) && (VAR_17->TupleCode < 0xff)))
     VAR_21++;
    }
    if ((VAR_19 == VAR_12) || (VAR_21 > 5) ||
 ((!VAR_22 || !VAR_23) && (VAR_19 > 10)))
 VAR_19 = 0;

done:
    if (VAR_16)
     *VAR_16 = VAR_19;
    FUNC_1(VAR_17);
    FUNC_1(VAR_18);
    return 0;
}
