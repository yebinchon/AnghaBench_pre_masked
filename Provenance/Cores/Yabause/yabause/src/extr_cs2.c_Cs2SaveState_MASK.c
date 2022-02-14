
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int mpegstm_struct ;
typedef int mpegcon_struct ;
typedef int filter_struct ;
typedef int dirrec_struct ;
typedef int blockregs_struct ;
typedef int block_struct ;
struct TYPE_7__ {int _periodictiming; scalar_t__ mpegstm; scalar_t__ mpegcon; int mpegintmask; int vcounter; int mpegvideostatus; int mpegaudiostatus; int pictureinfo; int actionstatus; scalar_t__ fileinfo; scalar_t__ filter; TYPE_1__* partition; scalar_t__ block; int curdirsect; int blockfreespace; int datasectstotrans; int datatranssectpos; int datanumsecttrans; int datatransoffset; int datatranspartitionnum; int outconhostnum; int outconmpegromnum; int outconmpegbufnum; int outconmpegfbnum; int outconcddevnum; int _commandtiming; int _command; int lastbuffer; int transfileinfo; int isaudio; int speed1x; int isbufferfull; int isdiskchanged; int isonesectorstored; int datatranstype; int infotranstype; int calcsize; int putsectsize; int getsectsize; int playendFAD; int playFAD; scalar_t__ TOC; int cdwnum; int transfercount; int mpgauth; int satauth; int index; int track; int ctrladdr; int repcnt; int options; int status; int FAD; int reg; int carttype; } ;
struct TYPE_6__ {int member_1; int member_0; } ;
struct TYPE_5__ {int numblocks; scalar_t__ blocknum; int size; } ;
typedef TYPE_2__ IOCheck_struct ;
typedef int FILE ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (TYPE_2__*,void*,int,int,int *) ;

int FUNC_3(FILE * VAR_4) {
   int VAR_5, VAR_6;
   IOCheck_struct VAR_7 = { 0, 0 };



   VAR_5 = FUNC_1(VAR_4, "CS2 ", 2);


   FUNC_2(&VAR_7, (void *) &VAR_0->carttype, 4, 1, VAR_4);


   FUNC_2(&VAR_7, (void *) &VAR_0->reg, sizeof(blockregs_struct), 1, VAR_4);


   FUNC_2(&VAR_7, (void *) &VAR_0->FAD, 4, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->status, 1, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->options, 1, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->repcnt, 1, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->ctrladdr, 1, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->track, 1, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->index, 1, 1, VAR_4);


   FUNC_2(&VAR_7, (void *) &VAR_0->satauth, 2, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->mpgauth, 2, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->transfercount, 4, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->cdwnum, 4, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) VAR_0->TOC, 4, 102, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->playFAD, 4, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->playendFAD, 4, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->getsectsize, 4, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->putsectsize, 4, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->calcsize, 4, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->infotranstype, 4, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->datatranstype, 4, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->isonesectorstored, 1, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->isdiskchanged, 1, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->isbufferfull, 1, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->speed1x, 1, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->isaudio, 1, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->transfileinfo, 1, 12, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->lastbuffer, 1, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->_command, 1, 1, VAR_4);
   {
      u32 VAR_8 = (VAR_0->_periodictiming + 3) / 3;
      FUNC_2(&VAR_7, (void *) &VAR_8, 4, 1, VAR_4);
   }
   FUNC_2(&VAR_7, (void *) &VAR_0->_commandtiming, 4, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->outconcddevnum, 1, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->outconmpegfbnum, 1, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->outconmpegbufnum, 1, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->outconmpegromnum, 1, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->outconhostnum, 1, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->datatranspartitionnum, 1, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->datatransoffset, 4, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->datanumsecttrans, 4, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->datatranssectpos, 2, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->datasectstotrans, 2, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->blockfreespace, 4, 1, VAR_4);
   FUNC_2(&VAR_7, (void *) &VAR_0->curdirsect, 4, 1, VAR_4);


   FUNC_2(&VAR_7, (void *)VAR_0->block, sizeof(block_struct), VAR_1, VAR_4);


   for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
   {
      FUNC_2(&VAR_7, (void *)&VAR_0->partition[VAR_6].size, 4, 1, VAR_4);
      FUNC_2(&VAR_7, (void *)VAR_0->partition[VAR_6].blocknum, 1, VAR_1, VAR_4);
      FUNC_2(&VAR_7, (void *)&VAR_0->partition[VAR_6].numblocks, 1, 1, VAR_4);
   }


   FUNC_2(&VAR_7, (void *)VAR_0->filter, sizeof(filter_struct), VAR_3, VAR_4);


   FUNC_2(&VAR_7, (void *)VAR_0->fileinfo, sizeof(dirrec_struct), VAR_2, VAR_4);




   FUNC_2(&VAR_7, (void *)&VAR_0->actionstatus, 1, 1, VAR_4);
   FUNC_2(&VAR_7, (void *)&VAR_0->pictureinfo, 1, 1, VAR_4);
   FUNC_2(&VAR_7, (void *)&VAR_0->mpegaudiostatus, 1, 1, VAR_4);
   FUNC_2(&VAR_7, (void *)&VAR_0->mpegvideostatus, 2, 1, VAR_4);
   FUNC_2(&VAR_7, (void *)&VAR_0->vcounter, 2, 1, VAR_4);


   FUNC_2(&VAR_7, (void *)&VAR_0->mpegintmask, 4, 1, VAR_4);
   FUNC_2(&VAR_7, (void *)VAR_0->mpegcon, sizeof(mpegcon_struct), 2, VAR_4);
   FUNC_2(&VAR_7, (void *)VAR_0->mpegstm, sizeof(mpegstm_struct), 2, VAR_4);

   return FUNC_0(VAR_4, VAR_5);
}
