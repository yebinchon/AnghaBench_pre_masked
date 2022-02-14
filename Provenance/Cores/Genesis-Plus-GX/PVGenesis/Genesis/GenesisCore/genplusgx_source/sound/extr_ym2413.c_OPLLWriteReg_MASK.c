
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int TL; int TLL; int ksl; } ;
typedef TYPE_1__ YM2413_OPLL_SLOT ;
struct TYPE_9__ {int ksl_base; int block_fnum; int sus; int kcode; int fc; TYPE_1__* SLOT; } ;
typedef TYPE_2__ YM2413_OPLL_CH ;
typedef int UINT8 ;
struct TYPE_10__ {int** inst_tab; int rhythm; int* instvol_r; int* fn_tab; TYPE_2__* P_CH; } ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int* VAR_3 ;
 int FUNC_3 (int,int,int*) ;
 int FUNC_4 (int) ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static void FUNC_5(int VAR_5, int VAR_6)
{
  YM2413_OPLL_CH *VAR_7;
  YM2413_OPLL_SLOT *VAR_8;


  VAR_5 &= 0xff;
  VAR_6 &= 0xff;

  switch(VAR_5&0xf0)
  {
    case 0x00:
    {
      switch(VAR_5&0x0f)
      {
        case 0x00:
        case 0x01:
        case 0x02:
        case 0x03:
        case 0x04:
        case 0x05:
        case 0x06:
        case 0x07:
        {
          VAR_4[0][VAR_5] = VAR_6;
          FUNC_4(VAR_5);
          break;
        }

        case 0x0e:
        {
          if(VAR_6&0x20)
          {

            if ((VAR_4&0x20)==0)
            {

              FUNC_3(6, 12, &VAR_4[16][0]);


              FUNC_3(7, 14, &VAR_4[17][0]);

              VAR_7 = &VAR_4[7];
              VAR_8 = &VAR_7->SLOT[VAR_1];
              VAR_8->TL = ((VAR_4[7]>>4)<<2)<<(VAR_0-2-7);
              VAR_8->TLL = VAR_8->TL + (VAR_7->ksl_base>>VAR_8->ksl);


              FUNC_3(8, 16, &VAR_4[18][0]);

              VAR_7 = &VAR_4[8];
              VAR_8 = &VAR_7->SLOT[VAR_1];
              VAR_8->TL = ((VAR_4[8]>>4)<<2)<<(VAR_0-2-7);
              VAR_8->TLL = VAR_8->TL + (VAR_7->ksl_base>>VAR_8->ksl);
            }


            if(VAR_6&0x10)
            {
              FUNC_2 (&VAR_4[6].SLOT[VAR_1], 2);
              FUNC_2 (&VAR_4[6].SLOT[VAR_2], 2);
            }
            else
            {
              FUNC_1(&VAR_4[6].SLOT[VAR_1],~2);
              FUNC_1(&VAR_4[6].SLOT[VAR_2],~2);
            }


            if(VAR_6&0x01) FUNC_2 (&VAR_4[7].SLOT[VAR_1], 2);
            else FUNC_1(&VAR_4[7].SLOT[VAR_1],~2);


            if(VAR_6&0x08) FUNC_2 (&VAR_4[7].SLOT[VAR_2], 2);
            else FUNC_1(&VAR_4[7].SLOT[VAR_2],~2);


            if(VAR_6&0x04) FUNC_2 (&VAR_4[8].SLOT[VAR_1], 2);
            else FUNC_1(&VAR_4[8].SLOT[VAR_1],~2);


            if(VAR_6&0x02) FUNC_2 (&VAR_4[8].SLOT[VAR_2], 2);
            else FUNC_1(&VAR_4[8].SLOT[VAR_2],~2);
          }
          else
          {

            if (VAR_4&0x20)
            {

              FUNC_3(6, 12, &VAR_4[VAR_4[6]>>4][0]);


              FUNC_3(7, 14, &VAR_4[VAR_4[7]>>4][0]);


              FUNC_3(8, 16, &VAR_4[VAR_4[8]>>4][0]);
            }


            FUNC_1(&VAR_4[6].SLOT[VAR_1],~2);
            FUNC_1(&VAR_4[6].SLOT[VAR_2],~2);


            FUNC_1(&VAR_4[7].SLOT[VAR_1],~2);


            FUNC_1(&VAR_4[7].SLOT[VAR_2],~2);


            FUNC_1(&VAR_4[8].SLOT[VAR_1],~2);


            FUNC_1(&VAR_4[8].SLOT[VAR_2],~2);
          }

          VAR_4 = VAR_6&0x3f;
          break;
        }
      }

      break;
    }

    case 0x10:
    case 0x20:
    {
      int VAR_9;

      int VAR_10 = VAR_5&0x0f;

      if (VAR_10 >= 9)
        VAR_10 -= 9;

      VAR_7 = &VAR_4[VAR_10];

      if(VAR_5&0x10)
      {

        VAR_9 = (VAR_7->block_fnum&0x0f00) | VAR_6;
      }
      else
      {

        VAR_9 = ((VAR_6&0x0f)<<8) | (VAR_7->block_fnum&0xff);

        if(VAR_6&0x10)
        {
          FUNC_2 (&VAR_7->SLOT[VAR_1], 1);
          FUNC_2 (&VAR_7->SLOT[VAR_2], 1);
        }
        else
        {
          FUNC_1(&VAR_7->SLOT[VAR_1],~1);
          FUNC_1(&VAR_7->SLOT[VAR_2],~1);
        }

        VAR_7->sus = VAR_6 & 0x20;
      }


      if(VAR_7->block_fnum != VAR_9)
      {
        UINT8 VAR_11;
        VAR_7->block_fnum = VAR_9;


        VAR_7->kcode = (VAR_9&0x0f00)>>8;

        VAR_7->ksl_base = VAR_3[VAR_9>>5];

        VAR_9 = VAR_9 * 2;
        VAR_11 = (VAR_9&0x1c00) >> 10;
        VAR_7->fc = VAR_4[VAR_9&0x03ff] >> (7-VAR_11);


        VAR_7->SLOT[VAR_1].TLL = VAR_7->SLOT[VAR_1].TL + (VAR_7->ksl_base>>VAR_7->SLOT[VAR_1].ksl);
        VAR_7->SLOT[VAR_2].TLL = VAR_7->SLOT[VAR_2].TL + (VAR_7->ksl_base>>VAR_7->SLOT[VAR_2].ksl);


        FUNC_0(VAR_7,&VAR_7->SLOT[VAR_1]);
        FUNC_0(VAR_7,&VAR_7->SLOT[VAR_2]);
      }

      break;
    }

    case 0x30:
    {
      int VAR_12 = VAR_5&0x0f;

      if (VAR_12 >= 9)
        VAR_12 -= 9;

      VAR_7 = &VAR_4[VAR_12];
      VAR_8 = &VAR_7->SLOT[VAR_2];
      VAR_8->TL = ((VAR_6&0x0f)<<2)<<(VAR_0-2-7);
      VAR_8->TLL = VAR_8->TL + (VAR_7->ksl_base>>VAR_8->ksl);


      if ((VAR_12>=6) && (VAR_4&0x20))
      {


        if (VAR_12>=7)
        {
          VAR_8 = &VAR_7->SLOT[VAR_1];
          VAR_8->TL = ((VAR_6>>4)<<2)<<(VAR_0-2-7);
          VAR_8->TLL = VAR_8->TL + (VAR_7->ksl_base>>VAR_8->ksl);
        }
      }
      else
      {
        if ((VAR_4[VAR_12]&0xf0) != (VAR_6&0xf0))
        {
          VAR_4[VAR_12] = VAR_6;
          FUNC_3(VAR_12, VAR_12 * 2, &VAR_4[VAR_6>>4][0]);
        }
      }

      break;
    }

    default:
      break;
  }
}
