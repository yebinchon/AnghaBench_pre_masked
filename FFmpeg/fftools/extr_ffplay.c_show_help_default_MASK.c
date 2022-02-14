
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int ,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

void FUNC_9(const char *VAR_6, const char *VAR_7)
{
    FUNC_0(VAR_4);
    FUNC_7();
    FUNC_6(VAR_5, "Main options:", 0, VAR_3, 0);
    FUNC_6(VAR_5, "Advanced options:", VAR_3, 0, 0);
    FUNC_4("\n");
    FUNC_5(FUNC_1(), VAR_0);
    FUNC_5(FUNC_3(), VAR_0);

    FUNC_5(FUNC_8(), VAR_1);



    FUNC_4("\nWhile playing:\n"
           "q, ESC              quit\n"
           "f                   toggle full screen\n"
           "p, SPC              pause\n"
           "m                   toggle mute\n"
           "9, 0                decrease and increase volume respectively\n"
           "/, *                decrease and increase volume respectively\n"
           "a                   cycle audio channel in the current program\n"
           "v                   cycle video channel\n"
           "t                   cycle subtitle channel in the current program\n"
           "c                   cycle program\n"
           "w                   cycle video filters or show modes\n"
           "s                   activate frame-step mode\n"
           "left/right          seek backward/forward 10 seconds or to custom interval if -seek_interval is set\n"
           "down/up             seek backward/forward 1 minute\n"
           "page down/page up   seek backward/forward 10 minutes\n"
           "right mouse click   seek to percentage in file corresponding to fraction of width\n"
           "left double-click   toggle full screen\n"
           );
}
