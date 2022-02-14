
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int headbit; int headend; int* headptr; } ;
typedef TYPE_1__ oggpack_buffer ;
typedef int ogg_uint32_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 unsigned long* VAR_0 ;

long FUNC_2(oggpack_buffer *VAR_1,int VAR_2){
  unsigned long VAR_3=VAR_0[VAR_2];
  ogg_uint32_t VAR_4=-1;

  VAR_2+=VAR_1->headbit;

  if(VAR_2 >= VAR_1->headend<<3){

    if(VAR_1->headend<0)return -1;

    if(VAR_2){
      if (FUNC_0(VAR_1)) return -1;
      VAR_4=*VAR_1->headptr>>VAR_1->headbit;

      if(VAR_2>=8){
        ++VAR_1->headptr;
        --VAR_1->headend;
        FUNC_1(VAR_1);
        if(VAR_2>8){
          if (FUNC_0(VAR_1)) return -1;
          VAR_4|=*VAR_1->headptr<<(8-VAR_1->headbit);

          if(VAR_2>=16){
            ++VAR_1->headptr;
            --VAR_1->headend;
            FUNC_1(VAR_1);
            if(VAR_2>16){
              if (FUNC_0(VAR_1)) return -1;
              VAR_4|=*VAR_1->headptr<<(16-VAR_1->headbit);

              if(VAR_2>=24){
                ++VAR_1->headptr;
                --VAR_1->headend;
                FUNC_1(VAR_1);
                if(VAR_2>24){
                  if (FUNC_0(VAR_1)) return -1;
                  VAR_4|=*VAR_1->headptr<<(24-VAR_1->headbit);

                  if(VAR_2>=32){
                    ++VAR_1->headptr;
                    --VAR_1->headend;
                    FUNC_1(VAR_1);
                    if(VAR_2>32){
                      if (FUNC_0(VAR_1)) return -1;
                      if(VAR_1->headbit)VAR_4|=*VAR_1->headptr<<(32-VAR_1->headbit);

                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }else{

    VAR_4=VAR_1->headptr[0]>>VAR_1->headbit;
    if(VAR_2>8){
      VAR_4|=VAR_1->headptr[1]<<(8-VAR_1->headbit);
      if(VAR_2>16){
        VAR_4|=VAR_1->headptr[2]<<(16-VAR_1->headbit);
        if(VAR_2>24){
          VAR_4|=VAR_1->headptr[3]<<(24-VAR_1->headbit);
          if(VAR_2>32 && VAR_1->headbit){
            VAR_4|=VAR_1->headptr[4]<<(32-VAR_1->headbit);
          }
        }
      }
    }

    VAR_1->headptr+=VAR_2/8;
    VAR_1->headend-=VAR_2/8;
  }

  VAR_4&=VAR_3;
  VAR_1->headbit=VAR_2&7;
  return VAR_4;
}
