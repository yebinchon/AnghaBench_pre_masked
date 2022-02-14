
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_1__ ;


typedef int jclass ;
struct TYPE_32__ {int (* DeleteLocalRef ) (TYPE_1__**,int ) ;int (* GetMethodID ) (TYPE_1__**,int ,char*,char*) ;int (* NewGlobalRef ) (TYPE_1__**,int ) ;int (* FindClass ) (TYPE_1__**,char*) ;int (* GetFieldID ) (TYPE_1__**,int ,char*,char*) ;int (* GetJavaVM ) (TYPE_1__**,int **) ;} ;
typedef TYPE_1__* JNIEnv ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int * VAR_23 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__**,int **) ;
 int FUNC_5 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_6 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_7 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_8 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_9 (TYPE_1__**,int ) ;
 int FUNC_10 (TYPE_1__**,char*) ;
 int FUNC_11 (TYPE_1__**,int ) ;
 int FUNC_12 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_13 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_14 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_15 (TYPE_1__**,char*) ;
 int FUNC_16 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_17 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_18 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_19 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_20 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_21 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_22 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_23 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_24 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_25 (TYPE_1__**,int ) ;
 int FUNC_26 (TYPE_1__**,int ) ;
 int FUNC_27 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_28 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_29 (TYPE_1__**,int ) ;
 int FUNC_30 (TYPE_1__**,char*) ;
 int FUNC_31 (TYPE_1__**,int ) ;
 int FUNC_32 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_33 (int ) ;

void FUNC_34(JNIEnv *VAR_24) {

  switch (FUNC_2(&VAR_0, 0, 1)) {
    case 0:
      break;
    case 1:
      do {
        FUNC_33(0);
      } while (FUNC_0(&VAR_0) == 1);
    case 2:
      return;
  }

  if (VAR_23 == ((void*)0)) {
    (*VAR_24)->GetJavaVM(VAR_24, &VAR_23);
  }

  jclass VAR_25 = (*VAR_24)->FindClass(VAR_24, "java/util/ArrayList");
  VAR_2 = (*VAR_24)->NewGlobalRef(VAR_24, VAR_25);
  VAR_3 = (*VAR_24)->GetMethodID(VAR_24, VAR_2, "<init>", "()V");
  VAR_1 = (*VAR_24)->GetMethodID(VAR_24, VAR_2, "add", "(Ljava/lang/Object;)Z");
  (*VAR_24)->DeleteLocalRef(VAR_24, VAR_25);

  jclass VAR_26 = (*VAR_24)->FindClass(VAR_24, "com/taosdata/jdbc/ColumnMetaData");
  VAR_4 = (*VAR_24)->NewGlobalRef(VAR_24, VAR_26);
  VAR_9 = (*VAR_24)->GetMethodID(VAR_24, VAR_4, "<init>", "()V");
  VAR_8 = (*VAR_24)->GetFieldID(VAR_24, VAR_4, "colType", "I");
  VAR_6 = (*VAR_24)->GetFieldID(VAR_24, VAR_4, "colName", "Ljava/lang/String;");
  VAR_7 = (*VAR_24)->GetFieldID(VAR_24, VAR_4, "colSize", "I");
  VAR_5 = (*VAR_24)->GetFieldID(VAR_24, VAR_4, "colIndex", "I");
  (*VAR_24)->DeleteLocalRef(VAR_24, VAR_26);

  jclass VAR_27 = (*VAR_24)->FindClass(VAR_24, "com/taosdata/jdbc/TSDBResultSetRowData");
  VAR_10 = (*VAR_24)->NewGlobalRef(VAR_24, VAR_27);
  VAR_12 = (*VAR_24)->GetMethodID(VAR_24, VAR_10, "<init>", "(I)V");
  VAR_11 = (*VAR_24)->GetMethodID(VAR_24, VAR_10, "clear", "()V");
  VAR_13 = (*VAR_24)->GetMethodID(VAR_24, VAR_10, "setBoolean", "(IZ)V");
  VAR_15 = (*VAR_24)->GetMethodID(VAR_24, VAR_10, "setByte", "(IB)V");
  VAR_20 = (*VAR_24)->GetMethodID(VAR_24, VAR_10, "setShort", "(IS)V");
  VAR_18 = (*VAR_24)->GetMethodID(VAR_24, VAR_10, "setInt", "(II)V");
  VAR_19 = (*VAR_24)->GetMethodID(VAR_24, VAR_10, "setLong", "(IJ)V");
  VAR_17 = (*VAR_24)->GetMethodID(VAR_24, VAR_10, "setFloat", "(IF)V");
  VAR_16 = (*VAR_24)->GetMethodID(VAR_24, VAR_10, "setDouble", "(ID)V");
  VAR_21 = (*VAR_24)->GetMethodID(VAR_24, VAR_10, "setString", "(ILjava/lang/String;)V");
  VAR_22 = (*VAR_24)->GetMethodID(VAR_24, VAR_10, "setTimestamp", "(IJ)V");
  VAR_14 = (*VAR_24)->GetMethodID(VAR_24, VAR_10, "setByteArray", "(I[B)V");
  (*VAR_24)->DeleteLocalRef(VAR_24, VAR_27);

  FUNC_1(&VAR_0, 2);
  FUNC_3("native method register finished");
}
