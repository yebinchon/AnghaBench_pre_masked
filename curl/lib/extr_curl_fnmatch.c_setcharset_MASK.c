
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int setcharset_state ;


 int VAR_0 ;
 size_t VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (unsigned char) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned char*,int ,int ) ;
 int FUNC_2 (unsigned char**,unsigned char*) ;
 int FUNC_3 (unsigned char**,unsigned char*) ;

__attribute__((used)) static int FUNC_4(unsigned char **VAR_6, unsigned char *VAR_7)
{
  setcharset_state VAR_8 = 130;
  bool VAR_9 = VAR_2;
  unsigned char VAR_10;

  FUNC_1(VAR_7, 0, VAR_0);
  for(;;) {
    VAR_10 = **VAR_6;
    if(!VAR_10)
      return VAR_3;

    switch(VAR_8) {
    case 130:
      if(VAR_10 == ']') {
        if(VAR_9)
          return VAR_4;
        VAR_9 = VAR_5;
        VAR_8 = 129;
        VAR_7[VAR_10] = 1;
        (*VAR_6)++;
      }
      else if(VAR_10 == '[') {
        unsigned char *VAR_11 = *VAR_6 + 1;

        if(*VAR_11++ == ':' && FUNC_2(&VAR_11, VAR_7))
          *VAR_6 = VAR_11;
        else {
          VAR_7[VAR_10] = 1;
          (*VAR_6)++;
        }
        VAR_9 = VAR_5;
      }
      else if(VAR_10 == '^' || VAR_10 == '!') {
        if(!VAR_9) {
          if(VAR_7[VAR_1]) {
            VAR_7[VAR_10] = 1;
            VAR_9 = VAR_5;
          }
          else
            VAR_7[VAR_1] = 1;
        }
        else
          VAR_7[VAR_10] = 1;
        (*VAR_6)++;
      }
      else if(VAR_10 == '\\') {
        VAR_10 = *(++(*VAR_6));
        if(VAR_10)
          FUNC_3(VAR_6, VAR_7);
        else
          VAR_7['\\'] = 1;
        VAR_9 = VAR_5;
      }
      else {
        FUNC_3(VAR_6, VAR_7);
        VAR_9 = VAR_5;
      }
      break;
    case 129:
      if(VAR_10 == '[') {
        VAR_8 = 128;
        VAR_7[VAR_10] = 1;
        (*VAR_6)++;
      }
      else if(VAR_10 == ']') {
        return VAR_4;
      }
      else if(FUNC_0(VAR_10)) {
        VAR_7[VAR_10] = 1;
        (*VAR_6)++;
        VAR_8 = 130;
      }
      else



        goto fail;
      break;
    case 128:
      if(VAR_10 == ']')
        return VAR_4;
      VAR_8 = 130;
      VAR_7[VAR_10] = 1;
      (*VAR_6)++;
      break;
    }
  }
fail:
  return VAR_3;
}
