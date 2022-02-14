
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int size; int data; } ;
typedef TYPE_1__ ucvector ;


 unsigned int FUNC_0 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,unsigned char) ;

__attribute__((used)) static unsigned FUNC_4(ucvector* VAR_0, const char* VAR_1, const char* VAR_2)
{
  unsigned VAR_3 = 0;
  size_t VAR_4;
  ucvector VAR_5;
  FUNC_2(&VAR_5);
  for(VAR_4 = 0; VAR_1[VAR_4] != 0; VAR_4++) FUNC_3(&VAR_5, (unsigned char)VAR_1[VAR_4]);
  if(VAR_4 < 1 || VAR_4 > 79) return 89;
  FUNC_3(&VAR_5, 0);
  for(VAR_4 = 0; VAR_2[VAR_4] != 0; VAR_4++) FUNC_3(&VAR_5, (unsigned char)VAR_2[VAR_4]);
  VAR_3 = FUNC_0(VAR_0, "tEXt", VAR_5.data, VAR_5.size);
  FUNC_1(&VAR_5);

  return VAR_3;
}
