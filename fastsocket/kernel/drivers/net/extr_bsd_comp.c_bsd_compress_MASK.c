
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long fcode; } ;
struct bsd_dict {unsigned int codem1; int cptr; TYPE_1__ f; } ;
struct bsd_db {int hshift; unsigned int max_ent; unsigned int n_bits; int seqno; int hsize; unsigned int maxmaxcode; int bytes_out; int uncomp_bytes; int in_count; int incomp_bytes; int comp_bytes; int comp_count; int incomp_count; int uncomp_count; scalar_t__ lens; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,unsigned char,int) ;
 unsigned long FUNC_1 (int,unsigned char) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned char*) ;
 int VAR_3 ;
 int FUNC_5 (unsigned char*) ;
 int VAR_4 ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 (unsigned long) ;
 scalar_t__ FUNC_8 (struct bsd_db*) ;
 struct bsd_dict* FUNC_9 (struct bsd_db*,int) ;
 unsigned short* FUNC_10 (struct bsd_db*,int) ;

__attribute__((used)) static int FUNC_11 (void *VAR_5, unsigned char *VAR_6, unsigned char *VAR_7,
    int VAR_8, int VAR_9)
  {
    struct bsd_db *VAR_10;
    int VAR_11;
    unsigned int VAR_12;
    unsigned int VAR_13;
    unsigned int VAR_14;
    unsigned long VAR_15;
    int VAR_16;
    unsigned long VAR_17;
    struct bsd_dict *VAR_18;
    unsigned char VAR_19;
    int VAR_20;
    int VAR_21;
    int VAR_22;
    int VAR_23;
    unsigned char *VAR_24;
    int VAR_25;
    VAR_16 = FUNC_6(VAR_6);
    if (VAR_16 < 0x21 || VAR_16 > 0xf9)
      {
 return 0;
      }

    VAR_10 = (struct bsd_db *) VAR_5;
    VAR_11 = VAR_10->hshift;
    VAR_12 = VAR_10->max_ent;
    VAR_13 = VAR_10->n_bits;
    VAR_14 = 32;
    VAR_15 = 0;
    VAR_23 = FUNC_2 (VAR_13);


    VAR_24 = VAR_7;
    VAR_25 = VAR_4 + VAR_1;

    if (VAR_9 > VAR_8)
      {
 VAR_9 = VAR_8;
      }


    if (VAR_24)
      {
 *VAR_24++ = FUNC_4(VAR_6);
 *VAR_24++ = FUNC_5(VAR_6);
 *VAR_24++ = 0;
 *VAR_24++ = VAR_3;
 *VAR_24++ = VAR_10->seqno >> 8;
 *VAR_24++ = VAR_10->seqno;
      }


    VAR_6 += VAR_4;
    VAR_8 -= VAR_4;
    VAR_22 = ++VAR_8;

    while (--VAR_22 > 0)
      {
 VAR_19 = *VAR_6++;
 VAR_17 = FUNC_1 (VAR_16, VAR_19);
 VAR_20 = FUNC_0 (VAR_16, VAR_19, VAR_11);
 VAR_18 = FUNC_9 (VAR_10, VAR_20);


 if (VAR_18->codem1 >= VAR_12)
   {
     goto nomatch;
   }

 if (VAR_18->f.fcode == VAR_17)
   {
     VAR_16 = VAR_18->codem1 + 1;
     continue;
   }


 VAR_21 = (VAR_20 == 0) ? 1 : VAR_20;

 do
   {
     VAR_20 += VAR_21;
     if (VAR_20 >= VAR_10->hsize)
       {
  VAR_20 -= VAR_10->hsize;
       }
     VAR_18 = FUNC_9 (VAR_10, VAR_20);
     if (VAR_18->codem1 >= VAR_12)
       {
  goto nomatch;
       }
   }
 while (VAR_18->f.fcode != VAR_17);

 VAR_16 = VAR_18->codem1 + 1;
 continue;

nomatch:
 { VAR_14 -= VAR_13; VAR_15 |= ((VAR_16) << VAR_14); do { { ++VAR_25; if (VAR_24) { *VAR_24++ = (unsigned char) (VAR_15 >> 24); if (VAR_25 >= VAR_9) { VAR_24 = ((void*)0); } } }; VAR_15 <<= 8; VAR_14 += 8; } while (VAR_14 <= 24); };


 if (VAR_12 < VAR_10->maxmaxcode)
   {
     struct bsd_dict *VAR_26;
     struct bsd_dict *VAR_27;
     int VAR_28;


     if (VAR_12 >= VAR_23)
       {
  VAR_10->n_bits = ++VAR_13;
  VAR_23 = FUNC_2 (VAR_13);
       }





     VAR_26 = FUNC_9 (VAR_10, VAR_12 + 1);
     VAR_28 = VAR_26->cptr;
     VAR_27 = FUNC_9 (VAR_10, VAR_28);

     if (VAR_27->codem1 == VAR_12)
       {
  VAR_27->codem1 = VAR_0;
       }

     VAR_26->cptr = VAR_20;
     VAR_18->codem1 = VAR_12;
     VAR_18->f.fcode = VAR_17;
     VAR_10->max_ent = ++VAR_12;

     if (VAR_10->lens)
       {
  unsigned short *VAR_29 = FUNC_10 (VAR_10, VAR_12);
  unsigned short *VAR_30 = FUNC_10 (VAR_10, VAR_16);
  *VAR_29 = *VAR_30 + 1;
       }
   }
 VAR_16 = VAR_19;
      }

    { VAR_14 -= VAR_13; VAR_15 |= ((VAR_16) << VAR_14); do { { ++VAR_25; if (VAR_24) { *VAR_24++ = (unsigned char) (VAR_15 >> 24); if (VAR_25 >= VAR_9) { VAR_24 = ((void*)0); } } }; VAR_15 <<= 8; VAR_14 += 8; } while (VAR_14 <= 24); };

    VAR_10->bytes_out += VAR_25 - VAR_4 - VAR_1;
    VAR_10->uncomp_bytes += VAR_8;
    VAR_10->in_count += VAR_8;
    ++VAR_10->uncomp_count;
    ++VAR_10->seqno;

    if (VAR_14 < 32)
      {
 ++VAR_10->bytes_out;
      }





    if (FUNC_8(VAR_10))
      {
 { VAR_14 -= VAR_13; VAR_15 |= ((VAR_2) << VAR_14); do { { ++VAR_25; if (VAR_24) { *VAR_24++ = (unsigned char) (VAR_15 >> 24); if (VAR_25 >= VAR_9) { VAR_24 = ((void*)0); } } }; VAR_15 <<= 8; VAR_14 += 8; } while (VAR_14 <= 24); };
      }






    if (VAR_14 != 32)
      {
 { ++VAR_25; if (VAR_24) { *VAR_24++ = (unsigned char) ((VAR_15 | (0xff << (VAR_14-8))) >> 24); if (VAR_25 >= VAR_9) { VAR_24 = ((void*)0); } } };
      }






    if (VAR_12 >= VAR_23 && VAR_12 < VAR_10->maxmaxcode)
      {
 VAR_10->n_bits++;
      }


    if (VAR_24 == ((void*)0))
      {
 ++VAR_10->incomp_count;
 VAR_10->incomp_bytes += VAR_8;
 VAR_25 = 0;
      }
    else
      {
 ++VAR_10->comp_count;
 VAR_10->comp_bytes += VAR_25;
      }


    return VAR_25;


  }
