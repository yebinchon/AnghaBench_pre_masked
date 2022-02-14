
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ucvector ;
struct TYPE_5__ {int btype; int windowsize; } ;
typedef TYPE_1__ LodePNGCompressSettings ;
typedef int Hash ;


 unsigned int FUNC_0 (int *,size_t*,int *,unsigned char const*,size_t,size_t,TYPE_1__ const*,int) ;
 unsigned int FUNC_1 (int *,size_t*,int *,unsigned char const*,size_t,size_t,TYPE_1__ const*,int) ;
 int FUNC_2 (int *,unsigned char const*,size_t) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *,int ) ;

__attribute__((used)) static unsigned FUNC_5(ucvector* VAR_0, const unsigned char* VAR_1, size_t VAR_2,
                                 const LodePNGCompressSettings* VAR_3)
{
  unsigned VAR_4 = 0;
  size_t VAR_5, VAR_6, VAR_7;
  size_t VAR_8 = 0;
  Hash VAR_9;

  if(VAR_3->btype > 2) return 61;
  else if(VAR_3->btype == 0) return FUNC_2(VAR_0, VAR_1, VAR_2);
  else if(VAR_3->btype == 1) VAR_6 = VAR_2;
  else
  {
    VAR_6 = VAR_2 / 8 + 8;
    if(VAR_6 < 65535) VAR_6 = 65535;
  }

  VAR_7 = (VAR_2 + VAR_6 - 1) / VAR_6;
  if(VAR_7 == 0) VAR_7 = 1;

  VAR_4 = FUNC_4(&VAR_9, VAR_3->windowsize);
  if(VAR_4) return VAR_4;

  for(VAR_5 = 0; VAR_5 < VAR_7 && !VAR_4; VAR_5++)
  {
    int VAR_10 = VAR_5 == VAR_7 - 1;
    size_t VAR_11 = VAR_5 * VAR_6;
    size_t VAR_12 = VAR_11 + VAR_6;
    if(VAR_12 > VAR_2) VAR_12 = VAR_2;

    if(VAR_3->btype == 1) VAR_4 = FUNC_1(VAR_0, &VAR_8, &VAR_9, VAR_1, VAR_11, VAR_12, VAR_3, VAR_10);
    else if(VAR_3->btype == 2) VAR_4 = FUNC_0(VAR_0, &VAR_8, &VAR_9, VAR_1, VAR_11, VAR_12, VAR_3, VAR_10);
  }

  FUNC_3(&VAR_9);

  return VAR_4;
}
