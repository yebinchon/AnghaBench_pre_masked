
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dohentry {scalar_t__ numcname; struct cnamestore* cname; } ;
struct cnamestore {scalar_t__ len; } ;
typedef scalar_t__ DOHcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct cnamestore*,unsigned char*,unsigned char) ;

__attribute__((used)) static DOHcode FUNC_1(unsigned char *VAR_5,
                           size_t VAR_6,
                           unsigned int VAR_7,
                           struct dohentry *VAR_8)
{
  struct cnamestore *VAR_9;
  unsigned int VAR_10 = 128;
  unsigned char VAR_11;

  if(VAR_8->numcname == VAR_3)
    return VAR_4;

  VAR_9 = &VAR_8->cname[VAR_8->numcname++];
  do {
    if(VAR_7 >= VAR_6)
      return VAR_2;
    VAR_11 = VAR_5[VAR_7];
    if((VAR_11 & 0xc0) == 0xc0) {
      int VAR_12;

      if((VAR_7 + 1) >= VAR_6)
        return VAR_2;


      VAR_12 = (VAR_11 & 0x3f) << 8 | VAR_5[VAR_7 + 1];
      VAR_7 = VAR_12;
      continue;
    }
    else if(VAR_11 & 0xc0)
      return VAR_0;
    else
      VAR_7++;

    if(VAR_11) {
      DOHcode VAR_13;
      if(VAR_9->len) {
        VAR_13 = FUNC_0(VAR_9, (unsigned char *)".", 1);
        if(VAR_13)
          return VAR_13;
      }
      if((VAR_7 + VAR_11) > VAR_6)
        return VAR_0;

      VAR_13 = FUNC_0(VAR_9, &VAR_5[VAR_7], VAR_11);
      if(VAR_13)
        return VAR_13;
      VAR_7 += VAR_11;
    }
  } while(VAR_11 && --VAR_10);

  if(!VAR_10)
    return VAR_1;
  return VAR_4;
}
