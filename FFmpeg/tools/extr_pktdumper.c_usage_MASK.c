
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(int VAR_1)
{
    FUNC_0(VAR_0, "Dump (up to maxpkts) AVPackets as they are demuxed by libavformat.\n");
    FUNC_0(VAR_0, "Each packet is dumped in its own file named like\n");
    FUNC_0(VAR_0, "$(basename file.ext)_$PKTNUM_$STREAMINDEX_$STAMP_$SIZE_$FLAGS.bin\n");
    FUNC_0(VAR_0, "pktdumper [-nw] file [maxpkts]\n");
    FUNC_0(VAR_0, "-n\twrite No file at all, only demux.\n");
    FUNC_0(VAR_0, "-w\tWait at end of processing instead of quitting.\n");
    return VAR_1;
}
