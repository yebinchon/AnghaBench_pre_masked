
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; int * soundName; } ;
typedef TYPE_1__ sfx_t ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 TYPE_1__** VAR_5 ;
 int FUNC_4 (int *,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static sfx_t *FUNC_6( const char *VAR_6 ) {
 int VAR_7;
 int VAR_8;

 sfx_t *VAR_9;

 if (!VAR_6) {
  FUNC_0 (VAR_0, "S_FindName: NULL\n");
 }
 if (!VAR_6[0]) {
  FUNC_0 (VAR_0, "S_FindName: empty name\n");
 }

 if (FUNC_5(VAR_6) >= VAR_1) {
  FUNC_0 (VAR_0, "Sound name too long: %s", VAR_6);
 }

 VAR_8 = FUNC_3(VAR_6);

 VAR_9 = VAR_5[VAR_8];

 while (VAR_9) {
  if (!FUNC_2(VAR_9->soundName, VAR_6) ) {
   return VAR_9;
  }
  VAR_9 = VAR_9->next;
 }


 for (VAR_7=0 ; VAR_7 < VAR_4 ; VAR_7++) {
  if (!VAR_3[VAR_7].soundName[0]) {
   break;
  }
 }

 if (VAR_7 == VAR_4) {
  if (VAR_4 == VAR_2) {
   FUNC_0 (VAR_0, "S_FindName: out of sfx_t");
  }
  VAR_4++;
 }

 VAR_9 = &VAR_3[VAR_7];
 FUNC_1 (VAR_9, 0, sizeof(*VAR_9));
 FUNC_4 (VAR_9->soundName, VAR_6);

 VAR_9->next = VAR_5[VAR_8];
 VAR_5[VAR_8] = VAR_9;

 return VAR_9;
}
