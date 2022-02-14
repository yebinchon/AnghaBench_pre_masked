
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {size_t size; unsigned char* data; } ;
typedef TYPE_2__ ucvector ;
struct TYPE_20__ {int color; int * unknown_chunks_size; int * unknown_chunks_data; } ;
struct TYPE_17__ {int zlibsettings; int ignore_crc; scalar_t__ remember_unknown_chunks; scalar_t__ read_text_chunks; } ;
struct TYPE_19__ {int error; TYPE_8__ info_png; TYPE_1__ decoder; } ;
typedef TYPE_3__ LodePNGState ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (unsigned char const*) ;
 int FUNC_2 (int *,int *,unsigned char const*) ;
 scalar_t__ FUNC_3 (unsigned char const*) ;
 unsigned char* FUNC_4 (unsigned char const*) ;
 unsigned int FUNC_5 (unsigned char const*) ;
 unsigned char* FUNC_6 (unsigned char const*) ;
 scalar_t__ FUNC_7 (unsigned char const*,char*) ;
 unsigned int FUNC_8 (unsigned int,unsigned int,int *) ;
 int FUNC_9 (unsigned int*,unsigned int*,TYPE_3__*,unsigned char const*,size_t) ;
 int FUNC_10 (unsigned char*,unsigned char*,unsigned int,unsigned int,TYPE_8__*) ;
 int FUNC_11 (int *,unsigned char const*,unsigned int) ;
 int FUNC_12 (TYPE_8__*,unsigned char const*,unsigned int) ;
 int FUNC_13 (TYPE_8__*,int *,unsigned char const*,unsigned int) ;
 int FUNC_14 (TYPE_8__*,unsigned char const*,unsigned int) ;
 int FUNC_15 (TYPE_8__*,unsigned char const*,unsigned int) ;
 int FUNC_16 (TYPE_8__*,unsigned char const*,unsigned int) ;
 int FUNC_17 (int *,unsigned char const*,unsigned int) ;
 int FUNC_18 (TYPE_8__*,int *,unsigned char const*,unsigned int) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (TYPE_2__*,unsigned int) ;
 int FUNC_22 (TYPE_2__*,unsigned int,int ) ;
 int FUNC_23 (unsigned char**,size_t*,unsigned char*,size_t,int *) ;

__attribute__((used)) static void FUNC_24(unsigned char** VAR_0, unsigned* VAR_1, unsigned* VAR_2,
                          LodePNGState* VAR_3,
                          const unsigned char* VAR_4, size_t VAR_5)
{
  unsigned char VAR_6 = 0;
  const unsigned char* VAR_7;
  size_t VAR_8;
  ucvector VAR_9;


  unsigned VAR_10 = 0;





  *VAR_0 = 0;

  VAR_3->error = FUNC_9(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  if(VAR_3->error) return;

  FUNC_20(&VAR_9);
  VAR_7 = &VAR_4[33];



  while(!VAR_6 && !VAR_3->error)
  {
    unsigned VAR_11;
    const unsigned char* VAR_12;


    if((size_t)((VAR_7 - VAR_4) + 12) > VAR_5 || VAR_7 < VAR_4) FUNC_0(VAR_3->error, 30);


    VAR_11 = FUNC_5(VAR_7);

    if(VAR_11 > 2147483647) FUNC_0(VAR_3->error, 63);

    if((size_t)((VAR_7 - VAR_4) + VAR_11 + 12) > VAR_5 || (VAR_7 + VAR_11 + 12) < VAR_4)
    {
      FUNC_0(VAR_3->error, 64);
    }

    VAR_12 = FUNC_4(VAR_7);


    if(FUNC_7(VAR_7, "IDAT"))
    {
      size_t VAR_13 = VAR_9.size;
      if(!FUNC_21(&VAR_9, VAR_13 + VAR_11)) FUNC_0(VAR_3->error, 83 );
      for(VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) VAR_9.data[VAR_13 + VAR_8] = VAR_12[VAR_8];



    }

    else if(FUNC_7(VAR_7, "IEND"))
    {
      VAR_6 = 1;
    }

    else if(FUNC_7(VAR_7, "PLTE"))
    {
      VAR_3->error = FUNC_11(&VAR_3->info_png.color, VAR_12, VAR_11);
      if(VAR_3->error) break;



    }

    else if(FUNC_7(VAR_7, "tRNS"))
    {
      VAR_3->error = FUNC_17(&VAR_3->info_png.color, VAR_12, VAR_11);
      if(VAR_3->error) break;
    }
    else
    {

      if(!FUNC_1(VAR_7)) FUNC_0(VAR_3->error, 69);

      VAR_10 = 1;
    }

    if(!VAR_3->decoder.ignore_crc && !VAR_10)
    {
      if(FUNC_3(VAR_7)) FUNC_0(VAR_3->error, 57);
    }

    if(!VAR_6) VAR_7 = FUNC_6(VAR_7);
  }

  if(!VAR_3->error)
  {
    ucvector VAR_14;
    FUNC_20(&VAR_14);


    if(!FUNC_21(&VAR_14, FUNC_8(*VAR_1, *VAR_2, &VAR_3->info_png.color) + *VAR_2))
    {
      VAR_3->error = 83;
    }
    if(!VAR_3->error)
    {

      VAR_3->error = FUNC_23(&VAR_14.data, &VAR_14.size, VAR_9.data,
                                     VAR_9.size, &VAR_3->decoder.zlibsettings);
    }

    if(!VAR_3->error)
    {
      ucvector VAR_15;
      FUNC_20(&VAR_15);
      if(!FUNC_22(&VAR_15,
          FUNC_8(*VAR_1, *VAR_2, &VAR_3->info_png.color), 0)) VAR_3->error = 83;
      if(!VAR_3->error) VAR_3->error = FUNC_10(VAR_15.data, VAR_14.data, *VAR_1, *VAR_2, &VAR_3->info_png);
      *VAR_0 = VAR_15.data;
    }
    FUNC_19(&VAR_14);
  }

  FUNC_19(&VAR_9);
}
