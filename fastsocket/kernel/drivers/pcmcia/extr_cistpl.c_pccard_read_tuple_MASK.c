
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int TupleDataMax; scalar_t__ TupleOffset; int * TupleData; scalar_t__ Attributes; int DesiredTuple; } ;
typedef TYPE_1__ tuple_t ;
struct pcmcia_socket {int dev; } ;
typedef int cisdata_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int *,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (struct pcmcia_socket*,unsigned int,TYPE_1__*) ;
 int FUNC_4 (struct pcmcia_socket*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,void*) ;

int FUNC_6(struct pcmcia_socket *VAR_5, unsigned int VAR_6, cisdata_t VAR_7, void *VAR_8)
{
    tuple_t VAR_9;
    cisdata_t *VAR_10;
    int VAR_11;

    VAR_10 = FUNC_2(256, VAR_2);
    if (VAR_10 == ((void*)0)) {
     FUNC_0(VAR_3, &VAR_5->dev, "no memory to read tuple\n");
     return -VAR_1;
    }
    VAR_9.DesiredTuple = VAR_7;
    VAR_9.Attributes = 0;
    if (VAR_6 == VAR_0)
     VAR_9.Attributes = VAR_4;
    VAR_11 = FUNC_3(VAR_5, VAR_6, &VAR_9);
    if (VAR_11 != 0)
     goto done;
    VAR_9.TupleData = VAR_10;
    VAR_9.TupleOffset = 0;
    VAR_9.TupleDataMax = 255;
    VAR_11 = FUNC_4(VAR_5, &VAR_9);
    if (VAR_11 != 0)
     goto done;
    VAR_11 = FUNC_5(&VAR_9, VAR_8);
done:
    FUNC_1(VAR_10);
    return VAR_11;
}
