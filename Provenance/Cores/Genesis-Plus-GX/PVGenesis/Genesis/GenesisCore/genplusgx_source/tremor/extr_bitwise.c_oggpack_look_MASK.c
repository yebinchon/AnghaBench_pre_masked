
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int headbit; int headend; unsigned char* headptr; int * head; } ;
typedef TYPE_1__ oggpack_buffer ;
typedef int ogg_reference ;


 int FUNC_0 () ;
 unsigned long* VAR_0 ;

long FUNC_1(oggpack_buffer *VAR_1,int VAR_2){
  unsigned long VAR_3=VAR_0[VAR_2];
  unsigned long VAR_4=-1;

  VAR_2+=VAR_1->headbit;

  if(VAR_2 >= VAR_1->headend<<3){
    int VAR_5=VAR_1->headend;
    unsigned char *VAR_6=VAR_1->headptr;
    ogg_reference *VAR_7=VAR_1->head;

    if(VAR_5<0)return -1;

    if(VAR_2){
      FUNC_0();
      VAR_4=*VAR_6++>>VAR_1->headbit;
      if(VAR_2>8){
        --VAR_5;
        FUNC_0();
        VAR_4|=*VAR_6++<<(8-VAR_1->headbit);
        if(VAR_2>16){
          --VAR_5;
          FUNC_0();
          VAR_4|=*VAR_6++<<(16-VAR_1->headbit);
          if(VAR_2>24){
            --VAR_5;
            FUNC_0();
            VAR_4|=*VAR_6++<<(24-VAR_1->headbit);
            if(VAR_2>32 && VAR_1->headbit){
              --VAR_5;
              FUNC_0();
              VAR_4|=*VAR_6<<(32-VAR_1->headbit);
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
          if(VAR_2>32 && VAR_1->headbit)
            VAR_4|=VAR_1->headptr[4]<<(32-VAR_1->headbit);
        }
      }
    }
  }

  VAR_4&=VAR_3;
  return VAR_4;
}
