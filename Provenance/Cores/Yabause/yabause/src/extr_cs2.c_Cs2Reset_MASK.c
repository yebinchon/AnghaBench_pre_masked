
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_9__ {int CR1; char CR2; char CR3; char CR4; int HIRQ; int HIRQMASK; } ;
struct TYPE_16__ {int FAD; int options; int repcnt; int ctrladdr; int track; int index; int infotranstype; int datatranstype; int getsectsize; int putsectsize; int isdiskchanged; int playFAD; int playendFAD; int blockfreespace; int lastbuffer; int _statustiming; TYPE_6__* mpegstm; TYPE_5__* mpegcon; scalar_t__ _commandtiming; scalar_t__ _periodiccycles; scalar_t__ _statuscycles; scalar_t__ _command; scalar_t__ numfiles; int fileinfo; scalar_t__ curdirfidoffset; scalar_t__ curdirsize; scalar_t__ curdirsect; int * TOC; TYPE_4__* block; TYPE_3__* partition; TYPE_2__* filter; scalar_t__ mpgauth; scalar_t__ satauth; scalar_t__ maxrepeat; scalar_t__ playtype; TYPE_1__ reg; scalar_t__ isaudio; scalar_t__ isonesectorstored; scalar_t__ isbufferfull; scalar_t__ cdwnum; scalar_t__ transfercount; int status; TYPE_7__* cdi; } ;
struct TYPE_15__ {int (* GetStatus ) () ;} ;
struct TYPE_14__ {int audstm; int vidstm; int audstmid; int vidstmid; int audchannum; int vidchannum; } ;
struct TYPE_13__ {int audcon; int vidcon; int audlay; int vidlay; int audbufnum; int vidbufnum; } ;
struct TYPE_12__ {int size; int * data; } ;
struct TYPE_11__ {int size; int* blocknum; int ** block; scalar_t__ numblocks; } ;
struct TYPE_10__ {int range; int condfalse; scalar_t__ condtrue; scalar_t__ cival; scalar_t__ smval; scalar_t__ fid; scalar_t__ cimask; scalar_t__ smmask; scalar_t__ chan; scalar_t__ mode; scalar_t__ FAD; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_8__* VAR_3 ;
 int FUNC_0 (int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 () ;

void FUNC_3(void) {
  u32 VAR_6, VAR_7;

  switch (VAR_3->cdi->GetStatus())
  {
     case 0:
     case 1:
             VAR_3->status = VAR_2;
             VAR_3->FAD = 150;
             VAR_3->options = 0;
             VAR_3->repcnt = 0;
             VAR_3->ctrladdr = 0x41;
             VAR_3->track = 1;
             VAR_3->index = 1;
             break;
     case 2:
             VAR_3->status = VAR_0;

             VAR_3->FAD = 0xFFFFFFFF;
             VAR_3->options = 0xFF;
             VAR_3->repcnt = 0xFF;
             VAR_3->ctrladdr = 0xFF;
             VAR_3->track = 0xFF;
             VAR_3->index = 0xFF;
             break;
     case 3:
             VAR_3->status = VAR_1;

             VAR_3->FAD = 0xFFFFFFFF;
             VAR_3->options = 0xFF;
             VAR_3->repcnt = 0xFF;
             VAR_3->ctrladdr = 0xFF;
             VAR_3->track = 0xFF;
             VAR_3->index = 0xFF;
             break;
     default: break;
  }

  VAR_3->infotranstype = -1;
  VAR_3->datatranstype = -1;
  VAR_3->transfercount = 0;
  VAR_3->cdwnum = 0;
  VAR_3->getsectsize = VAR_3->putsectsize = 2048;
  VAR_3->isdiskchanged = 1;
  VAR_3->isbufferfull = 0;
  VAR_3->isonesectorstored = 0;
  VAR_3->isaudio = 0;

  VAR_3->reg.CR1 = ( 0 <<8) | 'C';
  VAR_3->reg.CR2 = ('D'<<8) | 'B';
  VAR_3->reg.CR3 = ('L'<<8) | 'O';
  VAR_3->reg.CR4 = ('C'<<8) | 'K';
  VAR_3->reg.HIRQ = 0xFFFF;
  VAR_3->reg.HIRQMASK = 0xFFFF;

  VAR_3->playFAD = 0xFFFFFFFF;
  VAR_3->playendFAD = 0xFFFFFFFF;
  VAR_3->playtype = 0;
  VAR_3->maxrepeat = 0;


  VAR_3->satauth = 0;
  VAR_3->mpgauth = 0;


  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  {
     VAR_3->filter[VAR_6].FAD = 0;
     VAR_3->filter[VAR_6].range = 0xFFFFFFFF;
     VAR_3->filter[VAR_6].mode = 0;
     VAR_3->filter[VAR_6].chan = 0;
     VAR_3->filter[VAR_6].smmask = 0;
     VAR_3->filter[VAR_6].cimask = 0;
     VAR_3->filter[VAR_6].fid = 0;
     VAR_3->filter[VAR_6].smval = 0;
     VAR_3->filter[VAR_6].cival = 0;
     VAR_3->filter[VAR_6].condtrue = 0;
     VAR_3->filter[VAR_6].condfalse = 0xFF;
  }


  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  {
     VAR_3->partition[VAR_6].size = -1;
     VAR_3->partition[VAR_6].numblocks = 0;

     for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
     {
        VAR_3->partition[VAR_6].block[VAR_7] = ((void*)0);
        VAR_3->partition[VAR_6].blocknum[VAR_7] = 0xFF;
     }
  }


  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  {
     VAR_3->block[VAR_6].size = -1;
     FUNC_1(VAR_3->block[VAR_6].data, 0, 2352);
  }

  VAR_3->blockfreespace = 200;


  FUNC_1(VAR_3->TOC, 0xFF, sizeof(VAR_3->TOC));


  VAR_3->curdirsect = 0;
  VAR_3->curdirsize = 0;
  VAR_3->curdirfidoffset = 0;
  FUNC_1(&VAR_3->fileinfo, 0, sizeof(VAR_3->fileinfo));
  VAR_3->numfiles = 0;

  VAR_3->lastbuffer = 0xFF;

  VAR_3->_command = 0;
  VAR_3->_statuscycles = 0;
  VAR_3->_statustiming = 1000000;
  VAR_3->_periodiccycles = 0;
  VAR_3->_commandtiming = 0;
  FUNC_0(0);


  VAR_3->mpegcon[0].audcon = VAR_3->mpegcon[0].vidcon = 0x00;
  VAR_3->mpegcon[0].audlay = VAR_3->mpegcon[0].vidlay = 0x00;
  VAR_3->mpegcon[0].audbufnum = VAR_3->mpegcon[0].vidbufnum = 0xFF;
  VAR_3->mpegcon[1].audcon = VAR_3->mpegcon[1].vidcon = 0x00;
  VAR_3->mpegcon[1].audlay = VAR_3->mpegcon[1].vidlay = 0x00;
  VAR_3->mpegcon[1].audbufnum = VAR_3->mpegcon[1].vidbufnum = 0xFF;


  VAR_3->mpegstm[0].audstm = VAR_3->mpegstm[0].vidstm = 0x00;
  VAR_3->mpegstm[0].audstmid = VAR_3->mpegstm[0].vidstmid = 0x00;
  VAR_3->mpegstm[0].audchannum = VAR_3->mpegstm[0].vidchannum = 0x00;
  VAR_3->mpegstm[1].audstm = VAR_3->mpegstm[1].vidstm = 0x00;
  VAR_3->mpegstm[1].audstmid = VAR_3->mpegstm[1].vidstmid = 0x00;
  VAR_3->mpegstm[1].audchannum = VAR_3->mpegstm[1].vidchannum = 0x00;
}
