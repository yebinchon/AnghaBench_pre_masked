
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_5__ {int filePath; int fileCompat; int columnOutputFunctions; TYPE_2__* copyOutState; int executorState; scalar_t__ binaryCopyFormat; int tupleDescriptor; int memoryContext; } ;
typedef TYPE_1__ TaskFileDestReceiver ;
struct TYPE_6__ {char* delim; char* null_print; char* null_print_client; int fe_msgbuf; scalar_t__ binary; int rowcontext; } ;
typedef int MemoryContext ;
typedef int DestReceiver ;
typedef int CopyOutStateData ;
typedef TYPE_2__* CopyOutState ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int const,int const) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(DestReceiver *VAR_7, int VAR_8,
       TupleDesc VAR_9)
{
 TaskFileDestReceiver *VAR_10 = (TaskFileDestReceiver *) VAR_7;

 CopyOutState VAR_11 = ((void*)0);
 const char *VAR_12 = "\t";
 const char *VAR_13 = "\\N";

 const int VAR_14 = (VAR_0 | VAR_1 | VAR_2 | VAR_3 | VAR_4);
 const int VAR_15 = (VAR_5 | VAR_6);


 MemoryContext VAR_16 = FUNC_5(VAR_10->memoryContext);

 VAR_10->tupleDescriptor = VAR_9;


 VAR_11 = (CopyOutState) FUNC_8(sizeof(CopyOutStateData));
 VAR_11->delim = (char *) VAR_12;
 VAR_11->null_print = (char *) VAR_13;
 VAR_11->null_print_client = (char *) VAR_13;
 VAR_11->binary = VAR_10->binaryCopyFormat;
 VAR_11->fe_msgbuf = FUNC_7();
 VAR_11->rowcontext = FUNC_4(VAR_10->executorState);
 VAR_10->copyOutState = VAR_11;

 VAR_10->columnOutputFunctions = FUNC_1(VAR_9,
                VAR_11->binary);

 VAR_10->fileCompat = FUNC_2(FUNC_3(
                 VAR_10->filePath,
                 VAR_14,
                 VAR_15));

 if (VAR_11->binary)
 {

  FUNC_9(VAR_11->fe_msgbuf);
  FUNC_0(VAR_11);

  FUNC_6(VAR_11->fe_msgbuf, VAR_10);
 }

 FUNC_5(VAR_16);
}
