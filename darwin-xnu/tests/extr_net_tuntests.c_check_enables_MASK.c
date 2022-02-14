
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* uuid_t ;
typedef int socklen_t ;
typedef int scratch ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int *) ;
 int FUNC_1 (unsigned long,int,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 () ;
 int FUNC_7 (int,int ,int ,int*,int*) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (int*) ;

__attribute__((used)) static void
FUNC_10(int VAR_10, int VAR_11, int VAR_12, int VAR_13, uuid_t VAR_14)
{
 int VAR_15;
 socklen_t VAR_16, VAR_17;
 uuid_t VAR_18;
 if (!VAR_14) {
  VAR_14 = VAR_18;
 }



 VAR_16 = sizeof(VAR_15);
 VAR_3; VAR_4; FUNC_4(FUNC_7(VAR_10, VAR_2, VAR_7,
   &VAR_15, &VAR_16), ((void*)0));
 VAR_3; FUNC_1((unsigned long )VAR_16, sizeof(VAR_15), ((void*)0));
 VAR_3; FUNC_0(VAR_15, VAR_11, ((void*)0));

 VAR_16 = sizeof(VAR_15);
 VAR_3; VAR_4; FUNC_4(FUNC_7(VAR_10, VAR_2, VAR_6,
   &VAR_15, &VAR_16), ((void*)0));
 VAR_3; FUNC_1((unsigned long )VAR_16, sizeof(VAR_15), ((void*)0));
 if (FUNC_6() & VAR_1) {
  if (VAR_11) {
   VAR_3; FUNC_0(VAR_15, VAR_12, ((void*)0));
  } else {
   VAR_3; FUNC_0(VAR_15, 0, ((void*)0));
  }
 } else {
  VAR_3; FUNC_0(VAR_15, 0, ((void*)0));
 }

 VAR_16 = sizeof(VAR_15);
 VAR_3; VAR_4; FUNC_4(FUNC_7(VAR_10, VAR_2, VAR_5,
   &VAR_15, &VAR_16), ((void*)0));
 VAR_3; FUNC_1((unsigned long )VAR_16, sizeof(VAR_15), ((void*)0));
 if (VAR_9 && !VAR_11) {
  VAR_3; FUNC_0(VAR_15, 0, ((void*)0));
 } else {
  VAR_3; FUNC_0(VAR_15, VAR_13, ((void*)0));
 }

 if (VAR_15) {
  FUNC_8(VAR_14);
  VAR_17 = sizeof(uuid_t);
  VAR_3; VAR_4; FUNC_4(FUNC_7(VAR_10, VAR_2, VAR_8,
    VAR_14, &VAR_17), ((void*)0));
  VAR_3; FUNC_1((unsigned long )VAR_17, sizeof(uuid_t), ((void*)0));
  VAR_3; FUNC_2(FUNC_9(VAR_14), ((void*)0));
 } else {
  FUNC_8(VAR_14);
  VAR_17 = sizeof(uuid_t);
  VAR_3; FUNC_3(FUNC_7(VAR_10, VAR_2, VAR_8,
    VAR_14, &VAR_17), VAR_0, ((void*)0));
  VAR_3; FUNC_1((unsigned long )VAR_17, sizeof(uuid_t), ((void*)0));
  VAR_3; FUNC_5(FUNC_9(VAR_14), ((void*)0));
 }
}
