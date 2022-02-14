
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* fdOpenInfoRef ;
struct TYPE_6__ {int pids_size; int* pids; int pids_count; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (char const*,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int VAR_1 ;
 int* FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int*,int) ;
 int* FUNC_6 (int*,int) ;

int
FUNC_7(uint32_t VAR_2,
    uint32_t VAR_3,
    const char *VAR_4,
    uint32_t VAR_5,
    void *VAR_6,
    int VAR_7)
{
 int VAR_8;
 int *VAR_9 = (int *)VAR_6;
 int VAR_10;
 fdOpenInfoRef VAR_11;
 int VAR_12 = -1;

 if (VAR_6 == ((void*)0)) {

  return FUNC_5(VAR_2, VAR_3, ((void*)0), 0);
 }

 VAR_7 -= (VAR_7 % sizeof(int));
 if (VAR_7 < sizeof(int)) {

  VAR_1 = VAR_0;
  return -1;
 }


 VAR_11 = FUNC_1(VAR_4, VAR_5);
 if (VAR_11 == ((void*)0)) {
  return -1;
 }


 VAR_8 = FUNC_5(VAR_2, VAR_3, ((void*)0), 0);
 if (VAR_8 <= 0) {
  goto done;
 }

 while (1) {
  if (VAR_8 > VAR_11->pids_size) {

   while (VAR_8 > VAR_11->pids_size) {
    VAR_11->pids_size += (sizeof(int) * 32);
   }

   if (VAR_11->pids == ((void*)0)) {
    VAR_11->pids = FUNC_4(VAR_11->pids_size);
   } else {
    VAR_11->pids = FUNC_6(VAR_11->pids, VAR_11->pids_size);
   }
   if (VAR_11->pids == ((void*)0)) {
    goto done;
   }
  }

  VAR_8 = FUNC_5(VAR_2, VAR_3, VAR_11->pids, (int)VAR_11->pids_size);
  if (VAR_8 <= 0) {
   goto done;
  }

  if ((VAR_8 + sizeof(int)) >= VAR_11->pids_size) {

   VAR_8 = (int)(VAR_11->pids_size + sizeof(int));
   continue;
  }

  VAR_11->pids_count = VAR_8 / sizeof(int);
  break;
 }


 VAR_8 = 0;
 for (VAR_10 = VAR_11->pids_count - 1; VAR_10 >= 0; VAR_10--) {
  int VAR_13;
  int VAR_14;

  VAR_13 = VAR_11->pids[VAR_10];
  if (VAR_13 == 0) {
   continue;
  }

  VAR_14 = FUNC_2(VAR_11, VAR_13);
  if (VAR_14 != 1) {

   continue;
  }

  *VAR_9++ = VAR_13;
  VAR_8 += sizeof(int);

  if (VAR_8 >= VAR_7) {

   break;
  }
 }

 if (VAR_8 >= VAR_7) {

  VAR_12 = VAR_8;
  goto done;
 }


 for (VAR_10 = VAR_11->pids_count - 1; VAR_10 >= 0; VAR_10--) {
  int VAR_15;
  int VAR_16;

  VAR_15 = VAR_11->pids[VAR_10];
  if (VAR_15 == 0) {
   continue;
  }

  VAR_16 = FUNC_3(VAR_11, VAR_15);
  if (VAR_16 != 1) {

   continue;
  }

  *VAR_9++ = VAR_15;
  VAR_8 += sizeof(int);

  if (VAR_8 >= VAR_7) {

   break;
  }
 }

 VAR_12 = VAR_8;

    done :


 FUNC_0(VAR_11);

 return VAR_12;
}
