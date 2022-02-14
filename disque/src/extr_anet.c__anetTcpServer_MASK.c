
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_family; int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; struct addrinfo* ai_next; int ai_flags; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int ,int ,int) ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct addrinfo*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_7 (struct addrinfo*,int ,int) ;
 int FUNC_8 (char*,int,char*,int) ;
 int FUNC_9 (int,int ,int ) ;

__attribute__((used)) static int FUNC_10(char *VAR_4, int VAR_5, char *VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9, VAR_10;
    char VAR_11[6];
    struct addrinfo VAR_12, *VAR_13, *VAR_14;

    FUNC_8(VAR_11,6,"%d",VAR_5);
    FUNC_7(&VAR_12,0,sizeof(VAR_12));
    VAR_12.ai_family = VAR_7;
    VAR_12.ai_socktype = VAR_3;
    VAR_12.ai_flags = VAR_1;

    if ((VAR_10 = FUNC_6(VAR_6,VAR_11,&VAR_12,&VAR_13)) != 0) {
        FUNC_1(VAR_4, "%s", FUNC_5(VAR_10));
        return VAR_2;
    }
    for (VAR_14 = VAR_13; VAR_14 != ((void*)0); VAR_14 = VAR_14->ai_next) {
        if ((VAR_9 = FUNC_9(VAR_14->ai_family,VAR_14->ai_socktype,VAR_14->ai_protocol)) == -1)
            continue;

        if (VAR_7 == VAR_0 && FUNC_3(VAR_4,VAR_9) == VAR_2) goto error;
        if (FUNC_2(VAR_4,VAR_9) == VAR_2) goto error;
        if (FUNC_0(VAR_4,VAR_9,VAR_14->ai_addr,VAR_14->ai_addrlen,VAR_8) == VAR_2) goto error;
        goto end;
    }
    if (VAR_14 == ((void*)0)) {
        FUNC_1(VAR_4, "unable to bind socket");
        goto error;
    }

error:
    VAR_9 = VAR_2;
end:
    FUNC_4(VAR_13);
    return VAR_9;
}
