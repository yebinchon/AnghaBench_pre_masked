
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {int* (* Malloc ) (int) ;int (* Free ) (int*) ;} ;


 int FUNC_0 (char const*,int**,int**,int*,int*) ;
 TYPE_1__ VAR_0 ;
 int* FUNC_1 (int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static void FUNC_4 ( const char *VAR_1, byte **VAR_2, int *VAR_3, int *VAR_4) {
 byte *VAR_5;
 byte *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 byte *VAR_10;

 FUNC_0 (VAR_1, &VAR_6, &VAR_5, VAR_3, VAR_4);
 if (!VAR_6) {
  *VAR_2 = ((void*)0);
  return;
 }

 VAR_8 = (*VAR_3) * (*VAR_4);
 VAR_10 = *VAR_2 = VAR_0.Malloc(4 * VAR_8 );
 for (VAR_7 = 0 ; VAR_7 < VAR_8 ; VAR_7++) {
  VAR_9 = VAR_6[VAR_7];
  VAR_10[0] = VAR_5[VAR_9*3];
  VAR_10[1] = VAR_5[VAR_9*3 + 1];
  VAR_10[2] = VAR_5[VAR_9*3 + 2];
  VAR_10[3] = 255;
  VAR_10 += 4;
 }

 VAR_0.Free (VAR_6);
 VAR_0.Free (VAR_5);
}
